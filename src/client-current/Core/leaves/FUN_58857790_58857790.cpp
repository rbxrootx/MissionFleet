// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58857790 .. +0x8F bytes.
extern "C" __declspec(naked) void FUN_58857790_58857790() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        push edi
        mov edi, dword ptr [ebp + 8]
        test edi, edi
        ; Exact mapped bytes 74 6A: je 0x58857807
        __asm _emit 0x74
        __asm _emit 0x6a
        mov edx, dword ptr [ebp + 0ch]
        test edx, edx
        ; Exact mapped bytes 74 63: je 0x58857807
        __asm _emit 0x74
        __asm _emit 0x63
        push esi
        mov esi, dword ptr [ebp + 10h]
        test esi, esi
        ; Exact mapped bytes 75 1A: jne 0x588577c6
        __asm _emit 0x75
        __asm _emit 0x1a
        mov byte ptr [edi], 0
        ; Exact mapped bytes E8 BB AC 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0xbb
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 EC 97 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xec
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        lea eax, [esi + 16h]
        pop esi
        pop edi
        pop ebp
        ret
        mov ecx, edi
        sub esi, edi
        ; Exact mapped bytes 66 0F 1F 44 00 00: nop word ptr [eax + eax]
        __asm _emit 0x66
        __asm _emit 0x0f
        __asm _emit 0x1f
        __asm _emit 0x44
        __asm _emit 0x00
        __asm _emit 0x00
        mov al, byte ptr [esi + ecx]
        lea ecx, [ecx + 1]
        mov byte ptr [ecx - 1], al
        test al, al
        ; Exact mapped bytes 74 24: je 0x58857801
        __asm _emit 0x74
        __asm _emit 0x24
        sub edx, 1
        ; Exact mapped bytes 75 EE: jne 0x588577d0
        __asm _emit 0x75
        __asm _emit 0xee
        test edx, edx
        ; Exact mapped bytes 75 1B: jne 0x58857801
        __asm _emit 0x75
        __asm _emit 0x1b
        mov byte ptr [edi], dl
        ; Exact mapped bytes E8 82 AC 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 22h
        ; Exact mapped bytes E8 B3 97 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0x97
        __asm _emit 0xff
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
        ; Exact mapped bytes E8 63 AC 00 00: call 0x5886246f
        __asm _emit 0xe8
        __asm _emit 0x63
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [eax], 16h
        ; Exact mapped bytes E8 94 97 FF FF: call 0x58850fab
        __asm _emit 0xe8
        __asm _emit 0x94
        __asm _emit 0x97
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, 16h
        pop edi
        pop ebp
        ret
    }
}
