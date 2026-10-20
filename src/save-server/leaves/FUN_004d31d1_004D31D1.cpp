// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004D31D1 .. +0xA0 bytes.
extern "C" __declspec(naked) void FUN_004d31d1_004D31D1() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4d31f7
        __asm _emit 0x75
        __asm _emit 0x14
        push 96eh
        push 671a64h
        ; Exact mapped bytes E8 4E 5B 05 00: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x4e
        __asm _emit 0x5b
        __asm _emit 0x05
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4d31f7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4d31dd
        __asm _emit 0x75
        __asm _emit 0xe0
        ; Exact mapped bytes 81 3D 04 6E 68 00 33 03 00 00: cmp dword ptr [0x686e04], 0x333
        __asm _emit 0x81
        __asm _emit 0x3d
        __asm _emit 0x04
        __asm _emit 0x6e
        __asm _emit 0x68
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x03
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes 73 04: jae 0x4d320d
        __asm _emit 0x73
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 5B: jmp 0x4d3268
        __asm _emit 0xeb
        __asm _emit 0x5b
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp + 8], 2
        ; Exact mapped bytes 74 28: je 0x4d3244
        __asm _emit 0x74
        __asm _emit 0x28
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 52 70: call dword ptr [edx + 0x70]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x70
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 0
        ; Exact mapped bytes 74 10: je 0x4d3244
        __asm _emit 0x74
        __asm _emit 0x10
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 1ch]
        mov dword ptr [ebp - 4], ecx
        mov dword ptr [ebp + 8], 2
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [edx], 1ch
        mov eax, dword ptr [ebp + 0ch]
        mov ecx, dword ptr [ebp + 10h]
        mov dword ptr [eax + 4], ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes FF 15 B8 BE 68 00: call dword ptr [0x68beb8]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0xb8
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
