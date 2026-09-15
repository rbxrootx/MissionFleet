// Exact recovered descriptor clipping/flag dispatcher.
extern "C" int Table005E0504;
extern "C" void *Import005E205C;
extern "C" void *Import005E1F78;
extern "C" __declspec(naked) void Recovered004C9CE0()
{
    __asm mov eax, dword ptr [esp+12]
    __asm sub esp, 16
    __asm and eax, 65535
    __asm push ebx
    __asm push esi
    __asm push edi
    __asm push ebp
    __asm mov ecx, dword ptr [eax*4+Table005E0504]
    __asm mov edi, dword ptr [esp+36]
    __asm push ecx
    __asm push edi
    __asm call dword ptr [Import005E205C]
    __asm mov esi, eax
    __asm mov ebx, dword ptr [esp+40]
    __asm lea ecx, [esp+16]
    __asm mov eax, dword ptr [ebx]
    __asm mov edx, dword ptr [ebx+4]
    __asm mov ebp, dword ptr [ebx+8]
    __asm mov dword ptr [ecx], eax
    __asm mov eax, dword ptr [ebx+12]
    __asm mov dword ptr [ecx+4], edx
    __asm mov dword ptr [ecx+8], ebp
    __asm mov bp, word ptr [esp+52]
    __asm mov dword ptr [ecx+12], eax
    __asm mov eax, dword ptr [esp+20]
    __asm inc eax
    __asm test bp, 2
    __asm mov dword ptr [esp+28], eax
    __asm je flag_one
    __asm lea eax, [esp+16]
    __asm push 0
    __asm push 0
    __asm push 0
    __asm push eax
    __asm push 2
    __asm push 0
    __asm push 0
    __asm push edi
    __asm call dword ptr [Import005E1F78]
    __asm flag_one:
    __asm mov eax, dword ptr [ebx+12]
    __asm mov dword ptr [esp+28], eax
    __asm mov eax, dword ptr [esp+16]
    __asm inc eax
    __asm test bp, 1
    __asm mov dword ptr [esp+24], eax
    __asm je class_change
    __asm lea eax, [esp+16]
    __asm push 0
    __asm push 0
    __asm push 0
    __asm push eax
    __asm push 2
    __asm push 0
    __asm push 0
    __asm push edi
    __asm call dword ptr [Import005E1F78]
    __asm class_change:
    __asm mov ax, word ptr [esp+48]
    __asm cmp word ptr [esp+44], ax
    __asm je flag_four
    __asm movzx eax, ax
    __asm mov ecx, dword ptr [eax*4+Table005E0504]
    __asm push ecx
    __asm push edi
    __asm call dword ptr [Import005E205C]
    __asm flag_four:
    __asm mov eax, dword ptr [ebx+8]
    __asm mov dword ptr [esp+24], eax
    __asm dec eax
    __asm test bp, 4
    __asm mov dword ptr [esp+16], eax
    __asm je flag_eight
    __asm lea eax, [esp+16]
    __asm push 0
    __asm push 0
    __asm push 0
    __asm push eax
    __asm push 2
    __asm push 0
    __asm push 0
    __asm push edi
    __asm call dword ptr [Import005E1F78]
    __asm flag_eight:
    __asm test bp, 8
    __asm je restore_class
    __asm mov eax, dword ptr [ebx]
    __asm mov dword ptr [esp+16], eax
    __asm mov eax, dword ptr [esp+28]
    __asm dec eax
    __asm test bp, 4096
    __asm mov dword ptr [esp+20], eax
    __asm je final_secondary
    __asm sub dword ptr [esp+24], 2
    __asm final_secondary:
    __asm lea eax, [esp+16]
    __asm push 0
    __asm push 0
    __asm push 0
    __asm push eax
    __asm push 2
    __asm push 0
    __asm push 0
    __asm push edi
    __asm call dword ptr [Import005E1F78]
    __asm restore_class:
    __asm push esi
    __asm push edi
    __asm call dword ptr [Import005E205C]
    __asm pop ebp
    __asm pop edi
    __asm pop esi
    __asm pop ebx
    __asm add esp, 16
    __asm ret
}
