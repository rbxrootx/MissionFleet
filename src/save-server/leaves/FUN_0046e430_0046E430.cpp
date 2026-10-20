// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0046E430 .. +0x132 bytes.
extern "C" __declspec(naked) void FUN_0046e430_0046E430() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 3ch
        lea eax, [ebp - 3ch]
        push eax
        lea ecx, [ebp - 10h]
        push ecx
        mov edx, dword ptr [ebp + 0ch]
        push edx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 B5 CE 00 00: call 0x47b300
        __asm _emit 0xe8
        __asm _emit 0xb5
        __asm _emit 0xce
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 1ch], eax
        mov ecx, dword ptr [ebp - 1ch]
        mov edx, dword ptr [ecx + 4]
        sub edx, 1
        mov dword ptr [ebp - 24h], edx
        cmp dword ptr [ebp - 24h], -1
        ; Exact mapped bytes 7C 0B: jl 0x46e46e
        __asm _emit 0x7c
        __asm _emit 0x0b
        mov eax, dword ptr [ebp + 10h]
        sub eax, 1
        cmp dword ptr [ebp - 24h], eax
        ; Exact mapped bytes 7E 24: jle 0x46e492
        __asm _emit 0x7e
        __asm _emit 0x24
        push 0
        mov ecx, dword ptr [ebp + 10h]
        sub ecx, 1
        push ecx
        mov edx, dword ptr [ebp + 14h]
        push edx
        lea eax, [ebp + 8]
        push eax
        ; Exact mapped bytes E8 BC 89 00 00: call 0x476e40
        __asm _emit 0xe8
        __asm _emit 0xbc
        __asm _emit 0x89
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 10h
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes EB 23: jmp 0x46e4b5
        __asm _emit 0xeb
        __asm _emit 0x23
        mov edx, dword ptr [ebp - 1ch]
        mov eax, dword ptr [ebp + 10h]
        sub eax, dword ptr [edx + 4]
        push eax
        mov ecx, dword ptr [ebp + 14h]
        push ecx
        lea edx, [ebp + 8]
        push edx
        ; Exact mapped bytes E8 87 8B 00 00: call 0x477030
        __asm _emit 0xe8
        __asm _emit 0x87
        __asm _emit 0x8b
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 0ch
        mov dword ptr [ebp - 14h], eax
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 18h], eax
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 1C: je 0x46e4db
        __asm _emit 0x74
        __asm _emit 0x1c
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        ; Exact mapped bytes 0F BE 15 D0 E0 67 00: movsx edx, byte ptr [0x67e0d0]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x15
        __asm _emit 0xd0
        __asm _emit 0xe0
        __asm _emit 0x67
        __asm _emit 0x00
        cmp ecx, edx
        ; Exact mapped bytes 74 0B: je 0x46e4db
        __asm _emit 0x74
        __asm _emit 0x0b
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB DA: jmp 0x46e4b5
        __asm _emit 0xeb
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 14h]
        add eax, 1
        mov dword ptr [ebp - 14h], eax
        test edx, edx
        ; Exact mapped bytes 74 6D: je 0x46e55b
        __asm _emit 0x74
        __asm _emit 0x6d
        mov ecx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 11: movsx edx, byte ptr [ecx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x11
        test edx, edx
        ; Exact mapped bytes 74 16: je 0x46e50e
        __asm _emit 0x74
        __asm _emit 0x16
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        cmp ecx, 65h
        ; Exact mapped bytes 74 0B: je 0x46e50e
        __asm _emit 0x74
        __asm _emit 0x0b
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        ; Exact mapped bytes EB E0: jmp 0x46e4ee
        __asm _emit 0xeb
        __asm _emit 0xe0
        mov eax, dword ptr [ebp - 14h]
        mov dword ptr [ebp - 20h], eax
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 02: movsx eax, byte ptr [edx]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x02
        cmp eax, 30h
        ; Exact mapped bytes 75 0B: jne 0x46e533
        __asm _emit 0x75
        __asm _emit 0x0b
        mov ecx, dword ptr [ebp - 14h]
        sub ecx, 1
        mov dword ptr [ebp - 14h], ecx
        ; Exact mapped bytes EB EA: jmp 0x46e51d
        __asm _emit 0xeb
        __asm _emit 0xea
        mov edx, dword ptr [ebp - 14h]
        add edx, 1
        mov dword ptr [ebp - 14h], edx
        mov eax, dword ptr [ebp - 14h]
        mov ecx, dword ptr [ebp - 20h]
        mov dl, byte ptr [ecx]
        mov byte ptr [eax], dl
        mov eax, dword ptr [ebp - 14h]
        ; Exact mapped bytes 0F BE 08: movsx ecx, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 20h]
        add edx, 1
        mov dword ptr [ebp - 20h], edx
        test ecx, ecx
        ; Exact mapped bytes 74 02: je 0x46e55b
        __asm _emit 0x74
        __asm _emit 0x02
        ; Exact mapped bytes EB D8: jmp 0x46e533
        __asm _emit 0xeb
        __asm _emit 0xd8
        mov eax, dword ptr [ebp - 18h]
        mov esp, ebp
        pop ebp
        ret
    }
}
