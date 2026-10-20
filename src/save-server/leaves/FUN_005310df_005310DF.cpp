// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005310DF .. +0x6B bytes.
extern "C" __declspec(naked) void FUN_005310df_005310DF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 1ch]
        push ecx
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x53110e
        __asm _emit 0x75
        __asm _emit 0x14
        push 39dh
        push 634f78h
        ; Exact mapped bytes E8 37 7C FF FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x37
        __asm _emit 0x7c
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x53110e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor edx, edx
        test edx, edx
        ; Exact mapped bytes 75 D5: jne 0x5310e9
        __asm _emit 0x75
        __asm _emit 0xd5
        mov ecx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes E8 7D 63 00 00: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x7d
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 74 63 00 00: call 0x537499
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x63
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        push 230h
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 0bch]
        push ecx
        ; Exact mapped bytes FF 15 B0 BF 68 00: call dword ptr [0x68bfb0]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb0
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D8 B3 FA FF: call 0x4dc519
        __asm _emit 0xe8
        __asm _emit 0xd8
        __asm _emit 0xb3
        __asm _emit 0xfa
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
