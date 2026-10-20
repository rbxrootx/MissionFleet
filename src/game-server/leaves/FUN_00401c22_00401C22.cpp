// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00401C22 .. +0xE5 bytes.
extern "C" __declspec(naked) void FUN_00401c22_00401C22() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 BF F6 FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 75 4A: jne 0x401c90
        __asm _emit 0x75
        __asm _emit 0x4a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 B2 F6 FF FF: call 0x401300
        __asm _emit 0xe8
        __asm _emit 0xb2
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, eax
        ; Exact mapped bytes E8 8B F6 FF FF: call 0x4012e0
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 32: je 0x401c90
        __asm _emit 0x74
        __asm _emit 0x32
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 17ch], 1
        push 0
        push 0
        push 0
        push 1
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 170h]
        or edx, 200000h
        push edx
        push 80020116h
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 A2 55 08 00: call 0x487232
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0x55
        __asm _emit 0x08
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 5B 7D 08 00: call 0x4899f7
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0x7d
        __asm _emit 0x08
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 74 37: je 0x401cd7
        __asm _emit 0x74
        __asm _emit 0x37
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [edx + 0d7ch]
        ; Exact mapped bytes E8 9C 3E 03 00: call 0x435b4e
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0x3e
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8c4h], 0
        ; Exact mapped bytes 74 12: je 0x401cd0
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8c4h]
        ; Exact mapped bytes E8 B5 9E 07 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 20: jmp 0x401cf7
        __asm _emit 0xeb
        __asm _emit 0x20
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 8c4h], 0
        ; Exact mapped bytes 74 12: je 0x401cf5
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp + 8]
        mov ecx, dword ptr [edx + 8c4h]
        ; Exact mapped bytes E8 90 9E 07 00: call 0x47bb85
        __asm _emit 0xe8
        __asm _emit 0x90
        __asm _emit 0x9e
        __asm _emit 0x07
        __asm _emit 0x00
        xor eax, eax
        add esp, 8
        cmp ebp, esp
        ; Exact mapped bytes E8 DF 6A 0A 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xdf
        __asm _emit 0x6a
        __asm _emit 0x0a
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
