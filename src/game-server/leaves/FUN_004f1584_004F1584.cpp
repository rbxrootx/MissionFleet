// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004F1584 .. +0x84 bytes.
extern "C" __declspec(naked) void FUN_004f1584_004F1584() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        push ebx
        push esi
        push edi
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x4f15a7
        __asm _emit 0x75
        __asm _emit 0x14
        push 8ch
        push 5c5574h
        ; Exact mapped bytes E8 5E 34 04 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x34
        __asm _emit 0x04
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4f15a7
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x4f158d
        __asm _emit 0x75
        __asm _emit 0xe0
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 49 D8 FF FF: call 0x4eedfe
        __asm _emit 0xe8
        __asm _emit 0x49
        __asm _emit 0xd8
        __asm _emit 0xff
        __asm _emit 0xff
        and eax, 40000000h
        test eax, eax
        ; Exact mapped bytes 75 41: jne 0x4f15ff
        __asm _emit 0x75
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 48 36 00 00: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x48
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 3D 36 00 00: call 0x4f4c0e
        __asm _emit 0xe8
        __asm _emit 0x3d
        __asm _emit 0x36
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 29: je 0x4f15ff
        __asm _emit 0x74
        __asm _emit 0x29
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 1ch]
        mov dword ptr [ebp - 0ch], edx
        mov ecx, dword ptr [ebp + 10h]
        ; Exact mapped bytes E8 65 A5 04 00: call 0x53bb4c
        __asm _emit 0xe8
        __asm _emit 0x65
        __asm _emit 0xa5
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        lea eax, [ebp - 0ch]
        push eax
        mov ecx, dword ptr [ebp + 0ch]
        push ecx
        push 36eh
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 DA A5 04 00: call 0x53bbd9
        __asm _emit 0xe8
        __asm _emit 0xda
        __asm _emit 0xa5
        __asm _emit 0x04
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
