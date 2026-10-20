// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584E3FF0 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_584e3ff0_584E3FF0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 51: je 0x584e404d
        __asm _emit 0x74
        __asm _emit 0x51
        mov eax, dword ptr [ebp + 0ch]
        cmp eax, dword ptr [ebp + 8]
        ; Exact mapped bytes 7E 08: jle 0x584e400c
        __asm _emit 0x7e
        __asm _emit 0x08
        mov ecx, dword ptr [ebp + 8]
        mov dword ptr [ebp - 4], ecx
        ; Exact mapped bytes EB 06: jmp 0x584e4012
        __asm _emit 0xeb
        __asm _emit 0x06
        mov edx, dword ptr [ebp + 0ch]
        mov dword ptr [ebp - 4], edx
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp + 0ch], eax
        imul eax, dword ptr [ebp + 0ch], 3e8h
        cdq
        idiv dword ptr [ebp + 8]
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 8]
        mov eax, dword ptr [ecx*4 + 589539b0h]
        imul eax, dword ptr [ebp + 10h]
        mov edx, 4
        imul ecx, edx, 3e7h
        cdq
        idiv dword ptr [ecx + 589539b0h]
        add eax, 1
        ; Exact mapped bytes EB 04: jmp 0x584e404f
        __asm _emit 0xeb
        __asm _emit 0x04
        ; Exact mapped bytes EB 02: jmp 0x584e404f
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
    }
}
