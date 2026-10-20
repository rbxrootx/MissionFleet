// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0048354F .. +0xB1 bytes.
extern "C" __declspec(naked) void FUN_0048354f_0048354F() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 7B: je 0x4835ee
        __asm _emit 0x74
        __asm _emit 0x7b
        mov dword ptr [ebp - 4], 0
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 09: jmp 0x48358c
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        cmp dword ptr [ebp - 8], 64h
        ; Exact mapped bytes 7D 57: jge 0x4835e9
        __asm _emit 0x7d
        __asm _emit 0x57
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [edx + eax*4 + 94h], -1
        ; Exact mapped bytes 74 3F: je 0x4835e7
        __asm _emit 0x74
        __asm _emit 0x3f
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, -1
        ; Exact mapped bytes 74 19: je 0x4835e7
        __asm _emit 0x74
        __asm _emit 0x19
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 B6 03 F8 FF: call 0x403990
        __asm _emit 0xe8
        __asm _emit 0xb6
        __asm _emit 0x03
        __asm _emit 0xf8
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 09: je 0x4835e7
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 9A: jmp 0x483583
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes EB 02: jmp 0x4835f0
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 E6 51 02 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xe6
        __asm _emit 0x51
        __asm _emit 0x02
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
