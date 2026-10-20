// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0049282C .. +0x100 bytes.
extern "C" __declspec(naked) void FUN_0049282c_0049282C() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 10h], ecx
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 75 14: jne 0x492855
        __asm _emit 0x75
        __asm _emit 0x14
        push 29eh
        push 5ca8a4h
        ; Exact mapped bytes E8 B0 21 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0xb0
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x492855
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x492838
        __asm _emit 0x75
        __asm _emit 0xdd
        mov edx, dword ptr [ebp - 10h]
        cmp dword ptr [edx + 4ch], 0
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x492921
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        lea eax, [ebp - 4]
        push eax
        push 58e500h
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 4ch]
        mov eax, dword ptr [ebp - 10h]
        mov ecx, dword ptr [eax + 4ch]
        mov eax, dword ptr [ecx]
        push edx
        ; Exact mapped bytes FF 10: call dword ptr [eax]
        __asm _emit 0xff
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 0F 8C 97 00 00 00: jl 0x492921
        __asm _emit 0x0f
        __asm _emit 0x8c
        __asm _emit 0x97
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 75 14: jne 0x4928a4
        __asm _emit 0x75
        __asm _emit 0x14
        push 2a6h
        push 5ca8a4h
        ; Exact mapped bytes E8 61 21 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x61
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4928a4
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x49288a
        __asm _emit 0x75
        __asm _emit 0xe0
        mov dword ptr [ebp - 0ch], 0
        mov dword ptr [ebp - 8], 0
        lea edx, [ebp - 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 10: call dword ptr [edx + 0x10]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x10
        test eax, eax
        ; Exact mapped bytes 7C 40: jl 0x492910
        __asm _emit 0x7c
        __asm _emit 0x40
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 75 14: jne 0x4928ea
        __asm _emit 0x75
        __asm _emit 0x14
        push 2ach
        push 5ca8a4h
        ; Exact mapped bytes E8 1B 21 0A 00: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x1b
        __asm _emit 0x21
        __asm _emit 0x0a
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x4928ea
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 E0: jne 0x4928d0
        __asm _emit 0x75
        __asm _emit 0xe0
        lea edx, [ebp - 8]
        push edx
        mov eax, dword ptr [ebp + 0ch]
        push eax
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 14: call dword ptr [edx + 0x14]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x14
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 0ch]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes FF 52 08: call dword ptr [edx + 8]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x08
        mov eax, dword ptr [ebp - 8]
        ; Exact mapped bytes EB 02: jmp 0x492923
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
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
