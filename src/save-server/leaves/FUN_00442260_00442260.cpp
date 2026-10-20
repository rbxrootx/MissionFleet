// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00442260 .. +0xD3 bytes.
extern "C" __declspec(naked) void FUN_00442260_00442260() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 2ch
        mov dword ptr [ebp - 28h], ecx
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [eax + 4]
        sub edx, dword ptr [ecx]
        cmp dword ptr [ebp + 0ch], edx
        ; Exact mapped bytes 72 08: jb 0x442281
        __asm _emit 0x72
        __asm _emit 0x08
        or eax, 0ffffffffh
        ; Exact mapped bytes E9 AC 00 00 00: jmp 0x44232d
        __asm _emit 0xe9
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 28h]
        mov ecx, dword ptr [eax + 4]
        mov dword ptr [ebp - 0ch], ecx
        mov edx, dword ptr [ebp - 28h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov cl, byte ptr [ebp - 8]
        mov byte ptr [ebp - 1ch], cl
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 18h], edx
        ; Exact mapped bytes EB 09: jmp 0x4422ac
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 18h]
        add eax, 1
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 18h]
        cmp ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 74 45: je 0x4422f9
        __asm _emit 0x74
        __asm _emit 0x45
        mov edx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB 09: jmp 0x4422c5
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp + 8]
        add ecx, dword ptr [ebp + 10h]
        cmp dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes 74 27: je 0x4422f7
        __asm _emit 0x74
        __asm _emit 0x27
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        xor ecx, ecx
        cmp edx, eax
        sete cl
        and ecx, 0ffh
        test ecx, ecx
        ; Exact mapped bytes 74 08: je 0x4422f5
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 18h]
        mov dword ptr [ebp - 4], edx
        ; Exact mapped bytes EB 0A: jmp 0x4422ff
        __asm _emit 0xeb
        __asm _emit 0x0a
        ; Exact mapped bytes EB C5: jmp 0x4422bc
        __asm _emit 0xeb
        __asm _emit 0xc5
        ; Exact mapped bytes EB AA: jmp 0x4422a3
        __asm _emit 0xeb
        __asm _emit 0xaa
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 4], eax
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx + 4]
        mov dword ptr [ebp - 20h], edx
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp - 20h]
        ; Exact mapped bytes 74 13: je 0x442323
        __asm _emit 0x74
        __asm _emit 0x13
        mov ecx, dword ptr [ebp - 28h]
        mov edx, dword ptr [ecx]
        mov dword ptr [ebp - 24h], edx
        mov eax, dword ptr [ebp - 4]
        sub eax, dword ptr [ebp - 24h]
        mov dword ptr [ebp - 2ch], eax
        ; Exact mapped bytes EB 07: jmp 0x44232a
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 2ch], 0ffffffffh
        mov eax, dword ptr [ebp - 2ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 0C 00: ret 0xc
        __asm _emit 0xc2
        __asm _emit 0x0c
        __asm _emit 0x00
    }
}
