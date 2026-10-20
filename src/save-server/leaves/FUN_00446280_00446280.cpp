// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00446280 .. +0x86 bytes.
extern "C" __declspec(naked) void FUN_00446280_00446280() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes EB 09: jmp 0x44628f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 0ch]
        sub eax, 1
        mov dword ptr [ebp + 0ch], eax
        mov ecx, dword ptr [ebp + 0ch]
        xor edx, edx
        cmp ecx, dword ptr [ebp + 10h]
        sete dl
        and edx, 0ffh
        neg edx
        sbb edx, edx
        inc edx
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 48: je 0x4462f7
        __asm _emit 0x74
        __asm _emit 0x48
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 09: jmp 0x4462c0
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        mov edx, dword ptr [ebp - 4]
        cmp edx, dword ptr [ebp + 18h]
        ; Exact mapped bytes 74 2D: je 0x4462f5
        __asm _emit 0x74
        __asm _emit 0x2d
        mov eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 0F BE 42 FF: movsx eax, byte ptr [edx - 1]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x42
        __asm _emit 0xff
        xor edx, edx
        cmp eax, ecx
        sete dl
        and edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 0D: je 0x4462f3
        __asm _emit 0x74
        __asm _emit 0x0d
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [ebp + 0ch]
        mov dword ptr [eax], ecx
        mov eax, dword ptr [ebp + 8]
        ; Exact mapped bytes EB 0F: jmp 0x446302
        __asm _emit 0xeb
        __asm _emit 0x0f
        ; Exact mapped bytes EB C2: jmp 0x4462b7
        __asm _emit 0xeb
        __asm _emit 0xc2
        ; Exact mapped bytes EB 8F: jmp 0x446286
        __asm _emit 0xeb
        __asm _emit 0x8f
        mov edx, dword ptr [ebp + 8]
        mov eax, dword ptr [ebp + 10h]
        mov dword ptr [edx], eax
        mov eax, dword ptr [ebp + 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
