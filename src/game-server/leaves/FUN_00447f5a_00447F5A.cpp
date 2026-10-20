// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00447F5A .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_00447f5a_00447F5A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], 0cccccccch
        mov dword ptr [ebp - 8], 0cccccccch
        mov dword ptr [ebp - 4], 0cccccccch
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 48h]
        mov edx, dword ptr [ecx + 40cc8h]
        mov dword ptr [ebp - 4], edx
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 5A: je 0x447fe7
        __asm _emit 0x74
        __asm _emit 0x5a
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        sar ecx, 8
        mov edx, dword ptr [ebp - 8]
        mov byte ptr [edx + 12ch], cl
        mov eax, dword ptr [ebp + 8]
        xor ecx, ecx
        ; Exact mapped bytes 66 8B 48 0E: mov cx, word ptr [eax + 0xe]
        __asm _emit 0x66
        __asm _emit 0x8b
        __asm _emit 0x48
        __asm _emit 0x0e
        test ecx, ecx
        ; Exact mapped bytes 74 12: je 0x447fc1
        __asm _emit 0x74
        __asm _emit 0x12
        mov edx, 0ffh
        test edx, edx
        ; Exact mapped bytes 74 09: je 0x447fc1
        __asm _emit 0x74
        __asm _emit 0x09
        mov dword ptr [ebp - 0ch], 1
        ; Exact mapped bytes EB 07: jmp 0x447fc8
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp - 8]
        mov cl, byte ptr [ebp - 0ch]
        mov byte ptr [eax + 12dh], cl
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 AC A2 02 00: call 0x47228c
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0xa2
        __asm _emit 0x02
        __asm _emit 0x00
        mov eax, 1
        ; Exact mapped bytes EB 02: jmp 0x447fe9
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        add esp, 0ch
        cmp ebp, esp
        ; Exact mapped bytes E8 ED 07 06 00: call 0x4a87e0
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x07
        __asm _emit 0x06
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
