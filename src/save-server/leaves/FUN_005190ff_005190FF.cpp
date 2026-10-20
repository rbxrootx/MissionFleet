// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005190FF .. +0x79 bytes.
extern "C" __declspec(naked) void FUN_005190ff_005190FF() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 80 78 FB FF: call 0x4d0991
        __asm _emit 0xe8
        __asm _emit 0x80
        __asm _emit 0x78
        __asm _emit 0xfb
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        add ecx, 64h
        mov eax, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + 64h]
        ; Exact mapped bytes FF 52 0C: call dword ptr [edx + 0xc]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 88h], 34h
        ; Exact mapped bytes 74 14: je 0x519140
        __asm _emit 0x74
        __asm _emit 0x14
        push 607h
        push 674cach
        ; Exact mapped bytes E8 05 FC 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x05
        __asm _emit 0xfc
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x519140
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DA: jne 0x519120
        __asm _emit 0x75
        __asm _emit 0xda
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 8ch]
        and eax, 8
        cmp eax, 8
        ; Exact mapped bytes 74 14: je 0x51916b
        __asm _emit 0x74
        __asm _emit 0x14
        push 608h
        push 674cach
        ; Exact mapped bytes E8 DA FB 00 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xfb
        __asm _emit 0x00
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x51916b
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 D5: jne 0x519146
        __asm _emit 0x75
        __asm _emit 0xd5
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
