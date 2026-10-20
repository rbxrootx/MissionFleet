// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464DAB .. +0xEF bytes.
extern "C" __declspec(naked) void FUN_00464dab_00464DAB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 0ch], ecx
        mov eax, dword ptr [ebp + 8]
        cmp dword ptr [eax + 16ch], -1
        ; Exact mapped bytes 0F 84 B9 00 00 00: je 0x464e92
        __asm _emit 0x0f
        __asm _emit 0x84
        __asm _emit 0xb9
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x464deb
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 0F 83 9D 00 00 00: jae 0x464e92
        __asm _emit 0x0f
        __asm _emit 0x83
        __asm _emit 0x9d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 16ch]
        imul edx, edx, 370h
        lea eax, [eax + edx + 16bdch]
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [eax + ecx*4 + 270h]
        mov dword ptr [ebp - 8], edx
        cmp dword ptr [ebp - 8], -1
        ; Exact mapped bytes 74 66: je 0x464e8d
        __asm _emit 0x74
        __asm _emit 0x66
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 168h]
        mov edx, dword ptr [ebp - 8]
        imul edx, edx, 37ch
        mov eax, dword ptr [ecx + edx + 278h]
        shr eax, 1
        and eax, 7fffffffh
        cmp eax, 37h
        ; Exact mapped bytes 72 41: jb 0x464e8d
        __asm _emit 0x72
        __asm _emit 0x41
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 168h]
        mov eax, dword ptr [ebp - 8]
        imul eax, eax, 37ch
        mov ecx, dword ptr [edx + eax + 278h]
        shr ecx, 1
        and ecx, 7fffffffh
        cmp ecx, 38h
        ; Exact mapped bytes 77 1B: ja 0x464e8d
        __asm _emit 0x77
        __asm _emit 0x1b
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [edx + 168h]
        mov ecx, dword ptr [ebp - 8]
        imul ecx, ecx, 37ch
        lea eax, [eax + ecx + 224h]
        ; Exact mapped bytes EB 07: jmp 0x464e94
        __asm _emit 0xeb
        __asm _emit 0x07
        ; Exact mapped bytes E9 50 FF FF FF: jmp 0x464de2
        __asm _emit 0xe9
        __asm _emit 0x50
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
