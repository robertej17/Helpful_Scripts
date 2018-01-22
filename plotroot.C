void plotroot()
{
	Int_t debug=1;
	if(debug!=0) printf("plotroot - starting\n");
	TGraph* g=new TGraph("/tmp/PlotData.txt");
	auto nPoints=g->GetN();
	printf("nPoints %d\n",nPoints);
	TH1F* h=new TH1F("h","",nPoints,1.,4096.);
	for(Int_t i=0;i<nPoints;++i){
	double x,y;
	g->GetPoint(i,x,y);
	h->SetBinContent(i,y);
	}
	if(debug!=0) printf("plotroot - drawing\n");
	TCanvas* NaI=new TCanvas("NaI","NaI");
	NaI->SetLogy();
	h->Rebin(4);
	//h->GetXaxis()->SetRange(450,600);
	printf("nPoints %d\n",nPoints);
        h->Draw("hist");
}
