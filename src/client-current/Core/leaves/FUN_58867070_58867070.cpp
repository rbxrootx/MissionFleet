// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58867070 .. +0x9B bytes.
extern "C" __declspec(naked) void FUN_58867070_58867070() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 76: je 0x588670f3
        __asm _emit 0x74
        __asm _emit 0x76
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 6F: je 0x588670f3
        __asm _emit 0x74
        __asm _emit 0x6f
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 74 0F: je 0x5886709b
        __asm _emit 0x74
        __asm _emit 0x0f
        mov ecx, edi
        mov edi, edi
        cmp byte ptr [ecx], 0
        ; Exact mapped bytes 74 22: je 0x588670b7
        __asm _emit 0x74
        __asm _emit 0x22
        inc ecx
        sub edx, 1
        ; Exact mapped bytes 75 F5: jne 0x58867090
        __asm _emit 0x75
        __asm _emit 0xf5
        mov byte ptr [edi], 0
        ; Exact mapped bytes E8 CC B3 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xcc
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 FD 9E FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xfd
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        mov eax, 16h
        pop edi
        pop ebp
        ret
        sub esi, ecx
        ; Exact mapped bytes 0F 1F 80 00 00 00 00: nop dword ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x80
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + ecx]
        lea ecx, [ecx + 1]
        mov byte ptr [ecx - 1], al
        test al, al
        ; Exact mapped bytes 74 20: je 0x588670ed
        __asm _emit 0x74
        __asm _emit 0x20
        sub edx, 1
        ; Exact mapped bytes 75 EE: jne 0x588670c0
        __asm _emit 0x75
        __asm _emit 0xee
        mov byte ptr [edi], dl
        ; Exact mapped bytes E8 96 B3 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x96
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 C7 9E FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xc7
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        pop esi
        mov eax, 22h
        pop edi
        pop ebp
        ret
        pop esi
        xor eax, eax
        pop edi
        pop ebp
        ret
        ; Exact mapped bytes E8 77 B3 FF FF: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xb3
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 A8 9E FE FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xa8
        __asm _emit 0x9e
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, 16h
        pop edi
        pop ebp
        ret
    }
}
