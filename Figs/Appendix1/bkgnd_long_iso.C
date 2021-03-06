void bkgnd_long_iso()
{
//=========Macro generated from canvas: backgroundiso_max2_set8_lt/backgroundiso_max2_set8_lt
//=========  (Wed Mar 29 17:52:44 2017) by ROOT version6.04/02
   TCanvas *backgroundiso_max2_set8_lt = new TCanvas("backgroundiso_max2_set8_lt", "backgroundiso_max2_set8_lt",79,381,400,300);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   backgroundiso_max2_set8_lt->Range(-1.328173,-0.1013825,1.136223,0.5299539);
   backgroundiso_max2_set8_lt->SetFillColor(0);
   backgroundiso_max2_set8_lt->SetBorderMode(0);
   backgroundiso_max2_set8_lt->SetBorderSize(2);
   backgroundiso_max2_set8_lt->SetTickx(1);
   backgroundiso_max2_set8_lt->SetTicky(1);
   backgroundiso_max2_set8_lt->SetLeftMargin(0.1331658);
   backgroundiso_max2_set8_lt->SetRightMargin(0.05527638);
   backgroundiso_max2_set8_lt->SetTopMargin(0.04744526);
   backgroundiso_max2_set8_lt->SetBottomMargin(0.1605839);
   backgroundiso_max2_set8_lt->SetFrameLineWidth(2);
   backgroundiso_max2_set8_lt->SetFrameBorderMode(0);
   backgroundiso_max2_set8_lt->SetFrameLineWidth(2);
   backgroundiso_max2_set8_lt->SetFrameBorderMode(0);
   
   TH1F *dataset_data_2012__iso_max2_set8_lt__53 = new TH1F("dataset_data_2012__iso_max2_set8_lt__53","  ",15,-1,1);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(6,6.112469e-05);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(7,0.0006723717);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(8,0.007640587);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(9,0.0737775);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(10,0.3399755);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(11,0.4594743);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(12,0.1151589);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinContent(13,0.003239609);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(6,6.112469e-05);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(7,0.0002027277);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(8,0.0006833949);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(9,0.002123588);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(10,0.004558607);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(11,0.00529955);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(12,0.002653122);
   dataset_data_2012__iso_max2_set8_lt__53->SetBinError(13,0.0004449945);
   dataset_data_2012__iso_max2_set8_lt__53->SetMinimum(0);
   dataset_data_2012__iso_max2_set8_lt__53->SetMaximum(0.5);
   dataset_data_2012__iso_max2_set8_lt__53->SetEntries(16360);
   dataset_data_2012__iso_max2_set8_lt__53->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#006600");
   dataset_data_2012__iso_max2_set8_lt__53->SetLineColor(ci);
   dataset_data_2012__iso_max2_set8_lt__53->SetLineWidth(2);

   ci = TColor::GetColor("#006600");
   dataset_data_2012__iso_max2_set8_lt__53->SetMarkerColor(ci);
   dataset_data_2012__iso_max2_set8_lt__53->SetMarkerStyle(20);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetTitle("Long track isolation");
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetNdivisions(505);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetLabelFont(132);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetLabelOffset(0.01);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetLabelSize(0.06);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetTitleSize(0.072);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetTitleOffset(0.95);
   dataset_data_2012__iso_max2_set8_lt__53->GetXaxis()->SetTitleFont(132);
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetTitle("Arbitrary units");
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetLabelFont(132);
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetLabelOffset(0.01);
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetLabelSize(0.06);
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetTitleSize(0.072);
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetTitleOffset(0.95);
   dataset_data_2012__iso_max2_set8_lt__53->GetYaxis()->SetTitleFont(132);
   dataset_data_2012__iso_max2_set8_lt__53->GetZaxis()->SetLabelFont(132);
   dataset_data_2012__iso_max2_set8_lt__53->GetZaxis()->SetLabelSize(0.06);
   dataset_data_2012__iso_max2_set8_lt__53->GetZaxis()->SetTitleSize(0.072);
   dataset_data_2012__iso_max2_set8_lt__53->GetZaxis()->SetTitleOffset(1.2);
   dataset_data_2012__iso_max2_set8_lt__53->GetZaxis()->SetTitleFont(132);
   dataset_data_2012__iso_max2_set8_lt__53->Draw("E1");
   
   TH1F *dataset_data_2011__iso_max2_set8_lt__54 = new TH1F("dataset_data_2011__iso_max2_set8_lt__54","Histogram of dataset_data_2011__iso_max2_set8_lt",15,-1,1);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(6,0.0001461347);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(7,0.001022943);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(8,0.005991524);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(9,0.07978956);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(10,0.3472161);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(11,0.4449803);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(12,0.1174923);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinContent(13,0.003361099);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(6,0.0001461347);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(7,0.0003866362);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(8,0.0009357189);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(9,0.003414678);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(10,0.007123225);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(11,0.008063937);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(12,0.004143635);
   dataset_data_2011__iso_max2_set8_lt__54->SetBinError(13,0.0007008376);
   dataset_data_2011__iso_max2_set8_lt__54->SetEntries(6843);
   dataset_data_2011__iso_max2_set8_lt__54->SetStats(0);

   ci = TColor::GetColor("#33cc00");
   dataset_data_2011__iso_max2_set8_lt__54->SetLineColor(ci);
   dataset_data_2011__iso_max2_set8_lt__54->SetLineWidth(2);

   ci = TColor::GetColor("#33cc00");
   dataset_data_2011__iso_max2_set8_lt__54->SetMarkerColor(ci);
   dataset_data_2011__iso_max2_set8_lt__54->SetMarkerStyle(20);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetTitle("iso_max2_set8_lt");
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetNdivisions(505);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetLabelFont(132);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetLabelOffset(0.01);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetLabelSize(0.06);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetTitleSize(0.072);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetTitleOffset(0.95);
   dataset_data_2011__iso_max2_set8_lt__54->GetXaxis()->SetTitleFont(132);
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetTitle("Events / ( 0.133333 )");
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetLabelFont(132);
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetLabelOffset(0.01);
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetLabelSize(0.06);
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetTitleSize(0.072);
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetTitleOffset(0.95);
   dataset_data_2011__iso_max2_set8_lt__54->GetYaxis()->SetTitleFont(132);
   dataset_data_2011__iso_max2_set8_lt__54->GetZaxis()->SetLabelFont(132);
   dataset_data_2011__iso_max2_set8_lt__54->GetZaxis()->SetLabelSize(0.06);
   dataset_data_2011__iso_max2_set8_lt__54->GetZaxis()->SetTitleSize(0.072);
   dataset_data_2011__iso_max2_set8_lt__54->GetZaxis()->SetTitleOffset(1.2);
   dataset_data_2011__iso_max2_set8_lt__54->GetZaxis()->SetTitleFont(132);
   dataset_data_2011__iso_max2_set8_lt__54->Draw("E1SAME");
   
   TH1F *dataset_data_2015__iso_max2_set8_lt__55 = new TH1F("dataset_data_2015__iso_max2_set8_lt__55","Histogram of dataset_data_2015__iso_max2_set8_lt",15,-1,1);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(7,0.001629992);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(8,0.01276827);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(9,0.1271394);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(10,0.3849497);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(11,0.3811464);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(12,0.08883455);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinContent(13,0.003531649);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(7,0.0006654414);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(8,0.001862444);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(9,0.005877019);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(10,0.01022631);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(11,0.01017567);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(12,0.004912562);
   dataset_data_2015__iso_max2_set8_lt__55->SetBinError(13,0.0009795032);
   dataset_data_2015__iso_max2_set8_lt__55->SetEntries(3681);
   dataset_data_2015__iso_max2_set8_lt__55->SetStats(0);

   ci = TColor::GetColor("#ff9900");
   dataset_data_2015__iso_max2_set8_lt__55->SetLineColor(ci);
   dataset_data_2015__iso_max2_set8_lt__55->SetLineWidth(2);

   ci = TColor::GetColor("#ff9900");
   dataset_data_2015__iso_max2_set8_lt__55->SetMarkerColor(ci);
   dataset_data_2015__iso_max2_set8_lt__55->SetMarkerStyle(20);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetTitle("iso_max2_set8_lt");
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetNdivisions(505);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetLabelFont(132);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetLabelOffset(0.01);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetLabelSize(0.06);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetTitleSize(0.072);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetTitleOffset(0.95);
   dataset_data_2015__iso_max2_set8_lt__55->GetXaxis()->SetTitleFont(132);
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetTitle("Events / ( 0.133333 )");
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetLabelFont(132);
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetLabelOffset(0.01);
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetLabelSize(0.06);
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetTitleSize(0.072);
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetTitleOffset(0.95);
   dataset_data_2015__iso_max2_set8_lt__55->GetYaxis()->SetTitleFont(132);
   dataset_data_2015__iso_max2_set8_lt__55->GetZaxis()->SetLabelFont(132);
   dataset_data_2015__iso_max2_set8_lt__55->GetZaxis()->SetLabelSize(0.06);
   dataset_data_2015__iso_max2_set8_lt__55->GetZaxis()->SetTitleSize(0.072);
   dataset_data_2015__iso_max2_set8_lt__55->GetZaxis()->SetTitleOffset(1.2);
   dataset_data_2015__iso_max2_set8_lt__55->GetZaxis()->SetTitleFont(132);
   dataset_data_2015__iso_max2_set8_lt__55->Draw("E1SAME");
   
   TH1F *dataset_data_2016__iso_max2_set8_lt__56 = new TH1F("dataset_data_2016__iso_max2_set8_lt__56","Histogram of dataset_data_2016__iso_max2_set8_lt",15,-1,1);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(4,6.164468e-05);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(6,0.000184934);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(7,0.00104796);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(8,0.0110344);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(9,0.1168167);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(10,0.3892245);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(11,0.3885464);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(12,0.0903711);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinContent(13,0.002712366);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(4,6.164468e-05);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(6,0.0001067717);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(7,0.0002541675);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(8,0.0008247496);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(9,0.002683491);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(10,0.004898328);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(11,0.00489406);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(12,0.002360275);
   dataset_data_2016__iso_max2_set8_lt__56->SetBinError(13,0.0004089045);
   dataset_data_2016__iso_max2_set8_lt__56->SetEntries(16222);
   dataset_data_2016__iso_max2_set8_lt__56->SetStats(0);

   ci = TColor::GetColor("#ff3333");
   dataset_data_2016__iso_max2_set8_lt__56->SetLineColor(ci);
   dataset_data_2016__iso_max2_set8_lt__56->SetLineWidth(2);

   ci = TColor::GetColor("#ff3333");
   dataset_data_2016__iso_max2_set8_lt__56->SetMarkerColor(ci);
   dataset_data_2016__iso_max2_set8_lt__56->SetMarkerStyle(20);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetTitle("iso_max2_set8_lt");
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetNdivisions(505);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetLabelFont(132);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetLabelOffset(0.01);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetLabelSize(0.06);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetTitleSize(0.072);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetTitleOffset(0.95);
   dataset_data_2016__iso_max2_set8_lt__56->GetXaxis()->SetTitleFont(132);
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetTitle("Events / ( 0.133333 )");
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetLabelFont(132);
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetLabelOffset(0.01);
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetLabelSize(0.06);
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetTitleSize(0.072);
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetTitleOffset(0.95);
   dataset_data_2016__iso_max2_set8_lt__56->GetYaxis()->SetTitleFont(132);
   dataset_data_2016__iso_max2_set8_lt__56->GetZaxis()->SetLabelFont(132);
   dataset_data_2016__iso_max2_set8_lt__56->GetZaxis()->SetLabelSize(0.06);
   dataset_data_2016__iso_max2_set8_lt__56->GetZaxis()->SetTitleSize(0.072);
   dataset_data_2016__iso_max2_set8_lt__56->GetZaxis()->SetTitleOffset(1.2);
   dataset_data_2016__iso_max2_set8_lt__56->GetZaxis()->SetTitleFont(132);
   dataset_data_2016__iso_max2_set8_lt__56->Draw("E1SAME");
   
   TLegend *leg = new TLegend(-731082.9,1.546562,28632.05,2.173906,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.055);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("dataset_data_2011__iso_max2_set8_lt","2011 data","L");

   ci = TColor::GetColor("#33cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("dataset_data_2012__iso_max2_set8_lt","2012 data","L");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("dataset_data_2015__iso_max2_set8_lt","2015 data","L");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("dataset_data_2016__iso_max2_set8_lt","2016 data","L");

   ci = TColor::GetColor("#ff3333");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   backgroundiso_max2_set8_lt->Modified();
   backgroundiso_max2_set8_lt->cd();
   backgroundiso_max2_set8_lt->SetSelected(backgroundiso_max2_set8_lt);
}
