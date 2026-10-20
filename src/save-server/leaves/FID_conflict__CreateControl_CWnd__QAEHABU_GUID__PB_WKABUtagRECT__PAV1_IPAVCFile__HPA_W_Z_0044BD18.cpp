// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0044BD18 .. +0x85 bytes.
extern "C" __declspec(naked) void FID_conflict__CreateControl_CWnd__QAEHABU_GUID__PB_WKABUtagRECT__PAV1_IPAVCFile__HPA_W_Z_0044BD18() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 2ch], ecx
        mov eax, dword ptr [ebp + 14h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 DB 64 0E 00: call 0x532208
        __asm _emit 0xe8
        __asm _emit 0xdb
        __asm _emit 0x64
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 19 61 0E 00: call 0x531e4e
        __asm _emit 0xe8
        __asm _emit 0x19
        __asm _emit 0x61
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 8]
        ; Exact mapped bytes E8 65 5E 0E 00: call 0x531ba2
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0x5e
        __asm _emit 0x0e
        __asm _emit 0x00
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 C9 65 0E 00: call 0x53230e
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 0ch], edx
        lea eax, [ebp - 28h]
        push eax
        lea ecx, [ebp - 20h]
        ; Exact mapped bytes E8 81 65 0E 00: call 0x5322dd
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0x65
        __asm _emit 0x0e
        __asm _emit 0x00
        mov ecx, dword ptr [eax]
        mov edx, dword ptr [eax + 4]
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp + 28h]
        push eax
        mov ecx, dword ptr [ebp + 24h]
        push ecx
        mov edx, dword ptr [ebp + 20h]
        push edx
        mov eax, dword ptr [ebp + 1ch]
        push eax
        mov ecx, dword ptr [ebp + 18h]
        push ecx
        lea edx, [ebp - 8]
        push edx
        lea eax, [ebp - 10h]
        push eax
        mov ecx, dword ptr [ebp + 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 2ch]
        ; Exact mapped bytes E8 06 00 00 00: call 0x44bd9d
        __asm _emit 0xe8
        __asm _emit 0x06
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 24 00: ret 0x24
        __asm _emit 0xc2
        __asm _emit 0x24
        __asm _emit 0x00
    }
}
