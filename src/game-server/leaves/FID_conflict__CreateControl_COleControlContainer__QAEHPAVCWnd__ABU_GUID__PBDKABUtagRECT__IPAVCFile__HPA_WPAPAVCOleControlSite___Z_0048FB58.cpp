// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048FB58 .. +0x89 bytes.
extern "C" __declspec(naked) void FID_conflict__CreateControl_COleControlContainer__QAEHPAVCWnd__ABU_GUID__PBDKABUtagRECT__IPAVCFile__HPA_WPAPAVCOleControlSite___Z_0048FB58() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 18h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 25 62 0A 00: call 0x535d92
        __asm _emit 0xe8
        __asm _emit 0x25
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 E6 5D 0A 00: call 0x53595b
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x5d
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 B5 5A 0A 00: call 0x535632
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x5a
        __asm _emit 0x0a
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 22 63 0A 00: call 0x535ea7
        __asm _emit 0xe8
        __asm _emit 0x22
        __asm _emit 0x63
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 CB 62 0A 00: call 0x535e67
        __asm _emit 0xe8
        __asm _emit 0xcb
        __asm _emit 0x62
        __asm _emit 0x0a
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 2ch]
        push eax
        mov ecx, dword ptr [ebp + 28h]
        push ecx
        mov edx, dword ptr [ebp + 24h]
        push edx
        mov eax, dword ptr [ebp + 20h]
        push eax
        mov ecx, dword ptr [ebp + 1ch]
        push ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        mov edx, dword ptr [ebp + 10h]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 06 00 00 00: call 0x48fbe1
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 28 00: ret 0x28
        __asm _emit 0xc2
        __asm _emit 0x28
        __asm _emit 0x00
    }
}
