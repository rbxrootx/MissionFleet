// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58786D40 .. +0xC8 bytes.
extern "C" __declspec(naked) void FUN_58786d40_58786D40() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0f4h]
        mov dword ptr [ebp - 10h], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 53 53 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x53
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xff
        mov edx, dword ptr [ebp + 0ch]
        lea eax, [eax + edx - 5]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 FC CF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx + 48h]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 97 E8 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x97
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0f8h]
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 13 53 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0x13
        __asm _emit 0x53
        __asm _emit 0xd0
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 0ch]
        lea edx, [eax + ecx + 4]
        mov dword ptr [ebp - 14h], edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 11 FC CF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0x11
        __asm _emit 0xfc
        __asm _emit 0xcf
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        lea edx, [eax + ecx + 48h]
        mov dword ptr [ebp - 18h], edx
        mov eax, dword ptr [ebp - 14h]
        push eax
        mov ecx, dword ptr [ebp - 18h]
        push ecx
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 57 E8 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x57
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 0e8h]
        mov dword ptr [ebp - 28h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D3 52 D0 FF: call 0x5848c0b0
        __asm _emit 0xe8
        __asm _emit 0xd3
        __asm _emit 0x52
        __asm _emit 0xd0
        __asm _emit 0xff
        add eax, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D5 FB CF FF: call 0x584869c0
        __asm _emit 0xe8
        __asm _emit 0xd5
        __asm _emit 0xfb
        __asm _emit 0xcf
        __asm _emit 0xff
        add eax, dword ptr [ebp + 8]
        mov dword ptr [ebp - 24h], eax
        mov ecx, dword ptr [ebp - 20h]
        push ecx
        mov edx, dword ptr [ebp - 24h]
        push edx
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 1F E8 02 00: call 0x587b5620
        __asm _emit 0xe8
        __asm _emit 0x1f
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
