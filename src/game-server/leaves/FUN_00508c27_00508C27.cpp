// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00508C27 .. +0xB0 bytes.
extern "C" __declspec(naked) void FUN_00508c27_00508C27() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 28h], 0
        ; Exact mapped bytes 74 14: je 0x508c4e
        __asm _emit 0x74
        __asm _emit 0x14
        push 1feh
        push 5cb374h
        ; Exact mapped bytes E8 B7 BD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb7
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508c4e
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x508c31
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        add ecx, 40h
        ; Exact mapped bytes E8 4B 83 02 00: call 0x530faa
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x83
        __asm _emit 0x02
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [edx + 28h], eax
        push 10h
        ; Exact mapped bytes E8 8F E7 FE FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x8f
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 14: jne 0x508c84
        __asm _emit 0x75
        __asm _emit 0x14
        push 202h
        push 5cb374h
        ; Exact mapped bytes E8 81 BD 02 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x81
        __asm _emit 0xbd
        __asm _emit 0x02
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x508c84
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DB: jne 0x508c65
        __asm _emit 0x75
        __asm _emit 0xdb
        push 3c000h
        ; Exact mapped bytes E8 67 E7 FE FF: call 0x4f73fb
        __asm _emit 0xe8
        __asm _emit 0x67
        __asm _emit 0xe7
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 20h]
        or edx, 800000h
        cmp edx, 50800000h
        ; Exact mapped bytes 75 1A: jne 0x508cc2
        __asm _emit 0x75
        __asm _emit 0x1a
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 20h]
        or ecx, 0ff7fffffh
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 44h]
        and eax, ecx
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ecx + 20h], eax
        mov edx, dword ptr [ebp + 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8C F3 FF FF: call 0x50805a
        __asm _emit 0xe8
        __asm _emit 0x8c
        __asm _emit 0xf3
        __asm _emit 0xff
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
