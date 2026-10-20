// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00541A59 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_00541a59_00541A59() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        push 124h
        push 675764h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 EA 87 F9 FF: call 0x4da260
        __asm _emit 0xe8
        __asm _emit 0xea
        __asm _emit 0x87
        __asm _emit 0xf9
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        cmp dword ptr [ecx + 1ch], 0
        ; Exact mapped bytes 74 49: je 0x541ac8
        __asm _emit 0x74
        __asm _emit 0x49
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 1ch]
        push eax
        ; Exact mapped bytes FF 15 9C BF 68 00: call dword ptr [0x68bf9c]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x9c
        __asm _emit 0xbf
        __asm _emit 0x68
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x541aa4
        __asm _emit 0x75
        __asm _emit 0x14
        push 127h
        push 675764h
        ; Exact mapped bytes E8 A1 72 FE FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xa1
        __asm _emit 0x72
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x541aa4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x541a7f
        __asm _emit 0x75
        __asm _emit 0xd5
        push 0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 F8 9A FE FF: call 0x52b5ac
        __asm _emit 0xe8
        __asm _emit 0xf8
        __asm _emit 0x9a
        __asm _emit 0xfe
        __asm _emit 0xff
        push eax
        push 425h
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx]
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes FF 90 A8 00 00 00: call dword ptr [eax + 0xa8]
        __asm _emit 0xff
        __asm _emit 0x90
        __asm _emit 0xa8
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 35 9B FE FF: call 0x52b609
        __asm _emit 0xe8
        __asm _emit 0x35
        __asm _emit 0x9b
        __asm _emit 0xfe
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
