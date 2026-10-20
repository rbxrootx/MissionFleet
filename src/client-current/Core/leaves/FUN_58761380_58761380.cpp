// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58761380 .. +0x9F bytes.
extern "C" __declspec(naked) void FUN_58761380_58761380() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 8], ecx
        mov dword ptr [ebp - 4], 0
        movzx eax, word ptr [ebp + 0ch]
        cmp eax, 0bh
        ; Exact mapped bytes 75 1E: jne 0x587613b7
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx ecx, word ptr [ebp + 8]
        mov edx, dword ptr [ebp - 8]
        lea eax, [edx + ecx*8 + 1288h]
        mov ecx, 4
        imul edx, ecx, 0
        mov eax, dword ptr [eax + edx]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 2E: jmp 0x587613e5
        __asm _emit 0xeb
        __asm _emit 0x2e
        movzx ecx, word ptr [ebp + 0ch]
        cmp ecx, 0ch
        ; Exact mapped bytes 75 1E: jne 0x587613de
        __asm _emit 0x75
        __asm _emit 0x1e
        movzx edx, word ptr [ebp + 8]
        mov eax, dword ptr [ebp - 8]
        lea ecx, [eax + edx*8 + 1288h]
        mov edx, 4
        shl edx, 0
        mov eax, dword ptr [ecx + edx]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes EB 07: jmp 0x587613e5
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 4], 1
        movzx ecx, word ptr [ebp + 8]
        test ecx, ecx
        ; Exact mapped bytes 74 1D: je 0x5876140a
        __asm _emit 0x74
        __asm _emit 0x1d
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 08: je 0x587613fb
        __asm _emit 0x74
        __asm _emit 0x08
        mov edx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 0ch], edx
        ; Exact mapped bytes EB 07: jmp 0x58761402
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 0ch], 1
        mov eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 10h], eax
        ; Exact mapped bytes EB 06: jmp 0x58761410
        __asm _emit 0xeb
        __asm _emit 0x06
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], ecx
        mov edx, dword ptr [ebp - 10h]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
