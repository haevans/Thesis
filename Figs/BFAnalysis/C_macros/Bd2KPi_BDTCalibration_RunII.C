void FitPlots()///Bd2KPi_BDT1_n_bd_S21_Data_RunII_Both_BinningBHH_PIDsWeight_B2HH_Hlt2TOS_NoWeight_NoExclBkg_BDT_TrigCorr_DatavsMC_PubPlot()
{
//=========Macro generated from canvas: c_fit/c_fit
//=========  (Wed Jan 25 13:25:29 2017) by ROOT version6.02/05
   TCanvas *c_fit = new TCanvas("c_fit", "c_fit",1,1,800,600);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c_fit->SetHighLightColor(2);
   c_fit->Range(-0.1728395,-7.21519,1.061728,0.3797468);
   c_fit->SetFillColor(0);
   c_fit->SetBorderMode(0);
   c_fit->SetBorderSize(2);
   c_fit->SetLogy();
   c_fit->SetTickx(1);
   c_fit->SetTicky(1);
   c_fit->SetLeftMargin(0.14);
   c_fit->SetRightMargin(0.05);
   c_fit->SetTopMargin(0.05);
   c_fit->SetBottomMargin(0.16);
   c_fit->SetFrameLineWidth(2);
   c_fit->SetFrameBorderMode(0);
   c_fit->SetFrameLineWidth(2);
   c_fit->SetFrameBorderMode(0);
   
   Double_t _fx1015[5] = {
   0.125,
   0.325,
   0.45,
   0.55,
   0.8};
   Double_t _fy1015[5] = {
   0.1067971,
   0.1056095,
   0.09888571,
   0.09792857,
   0.09254821};
   Double_t _fex1015[5] = {
   0.125,
   0.075,
   0.05,
   0.05,
   0.2};
   Double_t _fey1015[5] = {
   0.01161799,
   0.01045394,
   0.01209445,
   0.007391271,
   0.005105711};
   TGraphErrors *gre = new TGraphErrors(5,_fx1015,_fy1015,_fex1015,_fey1015);
   gre->SetName("");
   gre->SetTitle(";BDT;PDF");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cccccc");
   gre->SetFillColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(21);
   gre->SetMarkerSize(2);
   
   TH1F *Graph_Graph1015 = new TH1F("Graph_Graph1015","",100,0,1);
   Graph_Graph1015->SetMinimum(1e-06);
   Graph_Graph1015->SetMaximum(1);
   Graph_Graph1015->SetDirectory(0);
   Graph_Graph1015->SetStats(0);
   Graph_Graph1015->SetLineWidth(2);
   Graph_Graph1015->SetMarkerStyle(20);
   Graph_Graph1015->GetXaxis()->SetTitle("BDT");
   Graph_Graph1015->GetXaxis()->SetNdivisions(505);
   Graph_Graph1015->GetXaxis()->SetLabelFont(132);
   Graph_Graph1015->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph1015->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1015->GetXaxis()->SetTitleSize(0.072);
   Graph_Graph1015->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph1015->GetXaxis()->SetTitleFont(132);
   Graph_Graph1015->GetYaxis()->SetTitle("PDF");
   Graph_Graph1015->GetYaxis()->SetLabelFont(132);
   Graph_Graph1015->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph1015->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1015->GetYaxis()->SetTitleSize(0.072);
   Graph_Graph1015->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph1015->GetYaxis()->SetTitleFont(132);
   Graph_Graph1015->GetZaxis()->SetLabelFont(132);
   Graph_Graph1015->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1015->GetZaxis()->SetTitleSize(0.072);
   Graph_Graph1015->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1015->GetZaxis()->SetTitleFont(132);
   gre->SetHistogram(Graph_Graph1015);
   
   gre->Draw("ap");
   
   Double_t _fx3001[5] = {
   0.125,
   0.325,
   0.45,
   0.55,
   0.8};
   Double_t _fy3001[5] = {
   0.3896301,
   0.002940844,
   0.0002714625,
   0.0002714625,
   1.696641e-05};
   Double_t _felx3001[5] = {
   0.125,
   0.075,
   0.05,
   0.05,
   0.2};
   Double_t _fely3001[5] = {
   0.0005326806,
   0.0003497848,
   0.0001161036,
   0.0001161036,
   1.241934e-05};
   Double_t _fehx3001[5] = {
   0.125,
   0.075,
   0.05,
   0.05,
   0.2};
   Double_t _fehy3001[5] = {
   0.0005154939,
   0.000379786,
   0.0001631444,
   0.0001631444,
   2.547746e-05};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(5,_fx3001,_fy3001,_felx3001,_fehx3001,_fely3001,_fehy3001);
   grae->SetName("");
   grae->SetTitle("");
   grae->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);
   grae->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   grae->SetMarkerStyle(24);
   grae->SetMarkerSize(2);
   
   TH1F *Graph_Graph3001 = new TH1F("Graph_Graph3001","",100,0,1.1);
   Graph_Graph3001->SetMinimum(4.092359e-06);
   Graph_Graph3001->SetMaximum(0.4291597);
   Graph_Graph3001->SetDirectory(0);
   Graph_Graph3001->SetStats(0);
   Graph_Graph3001->SetLineWidth(2);
   Graph_Graph3001->SetMarkerStyle(20);
   Graph_Graph3001->GetXaxis()->SetNdivisions(505);
   Graph_Graph3001->GetXaxis()->SetLabelFont(132);
   Graph_Graph3001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph3001->GetXaxis()->SetTitleSize(0.072);
   Graph_Graph3001->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetXaxis()->SetTitleFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelFont(132);
   Graph_Graph3001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph3001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph3001->GetYaxis()->SetTitleSize(0.072);
   Graph_Graph3001->GetYaxis()->SetTitleOffset(0.95);
   Graph_Graph3001->GetYaxis()->SetTitleFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelFont(132);
   Graph_Graph3001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph3001->GetZaxis()->SetTitleSize(0.072);
   Graph_Graph3001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph3001->GetZaxis()->SetTitleFont(132);
   grae->SetHistogram(Graph_Graph3001);
   
   grae->Draw("p ");
   
   TLegend *leg = new TLegend(0.2,0.2,0.5,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","LHCb Run II","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("","Signal","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(2);
   entry->SetTextFont(132);
   entry=leg->AddEntry(grae,"Background","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(2);
   entry->SetTextFont(132);
   leg->Draw();
   c_fit->Modified();
   c_fit->cd();
   c_fit->SetSelected(c_fit);
}
