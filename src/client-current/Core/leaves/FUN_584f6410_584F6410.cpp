// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584F6410 .. +0xE9 bytes.
extern "C" __declspec(naked) void FUN_584f6410_584F6410() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov dword ptr [ebp - 18h], ecx
        mov dword ptr [ebp - 8], 1
        mov dword ptr [ebp - 0ch], 0
        mov eax, dword ptr [ebp + 14h]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f643f
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 0c0h
        ; Exact mapped bytes 73 1E: jae 0x584f6466
        __asm _emit 0x73
        __asm _emit 0x1e
        mov edx, dword ptr [ebp - 10h]
        add edx, dword ptr [ebp - 4]
        movzx eax, byte ptr [edx]
        imul eax, dword ptr [ebp - 8]
        add eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        add ecx, 1
        mov dword ptr [ebp - 8], ecx
        ; Exact mapped bytes EB D0: jmp 0x584f6436
        __asm _emit 0xeb
        __asm _emit 0xd0
        mov edx, dword ptr [ebp + 1ch]
        mov dword ptr [ebp - 10h], edx
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x584f647e
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 73 1E: jae 0x584f64a2
        __asm _emit 0x73
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 4]
        movzx edx, byte ptr [ecx]
        imul edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D3: jmp 0x584f6475
        __asm _emit 0xeb
        __asm _emit 0xd3
        mov ecx, dword ptr [ebp + 1ch]
        cmp dword ptr [ecx], 0
        ; Exact mapped bytes 7E 46: jle 0x584f64f0
        __asm _emit 0x7e
        __asm _emit 0x46
        mov edx, dword ptr [ebp + 18h]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 14h], 0
        ; Exact mapped bytes EB 09: jmp 0x584f64c4
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 14h]
        add ecx, 1
        mov dword ptr [ebp - 14h], ecx
        mov edx, dword ptr [ebp + 1ch]
        mov eax, dword ptr [ebp + 20h]
        imul eax, dword ptr [edx]
        cmp dword ptr [ebp - 14h], eax
        ; Exact mapped bytes 7D 1E: jge 0x584f64f0
        __asm _emit 0x7d
        __asm _emit 0x1e
        mov ecx, dword ptr [ebp - 10h]
        add ecx, dword ptr [ebp - 14h]
        movzx edx, byte ptr [ecx]
        imul edx, dword ptr [ebp - 8]
        add edx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 0ch], edx
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB CB: jmp 0x584f64bb
        __asm _emit 0xeb
        __asm _emit 0xcb
        mov eax, dword ptr [ebp - 0ch]
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 1C 00: ret 0x1c
        __asm _emit 0xc2
        __asm _emit 0x1c
        __asm _emit 0x00
    }
}
