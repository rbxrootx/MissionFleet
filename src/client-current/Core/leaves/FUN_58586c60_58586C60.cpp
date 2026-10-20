// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58586C60 .. +0x8E bytes.
extern "C" __declspec(naked) void FUN_58586c60_58586C60() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 14h
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax], 588aac44h
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58586c84
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 4
        ; Exact mapped bytes 7D 57: jge 0x58586ce1
        __asm _emit 0x7d
        __asm _emit 0x57
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + edx*4 + 0ach], 0
        ; Exact mapped bytes 74 45: je 0x58586cdf
        __asm _emit 0x74
        __asm _emit 0x45
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + ecx*4 + 0ach]
        mov dword ptr [ebp - 0ch], eax
        cmp dword ptr [ebp - 0ch], 0
        ; Exact mapped bytes 74 17: je 0x58586cc7
        __asm _emit 0x74
        __asm _emit 0x17
        mov ecx, dword ptr [ebp - 0ch]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [edx]
        mov dword ptr [ebp - 10h], eax
        push 1
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes FF 55 F0: call dword ptr [ebp - 0x10]
        __asm _emit 0xff
        __asm _emit 0x55
        __asm _emit 0xf0
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes EB 07: jmp 0x58586cce
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 14h], 0
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 8]
        mov dword ptr [edx + ecx*4 + 0ach], 0
        ; Exact mapped bytes EB 9A: jmp 0x58586c7b
        __asm _emit 0xeb
        __asm _emit 0x9a
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 77 DE 22 00: call 0x587b4b60
        __asm _emit 0xe8
        __asm _emit 0x77
        __asm _emit 0xde
        __asm _emit 0x22
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
