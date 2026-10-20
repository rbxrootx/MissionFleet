// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58841FBE .. +0x43 bytes.
extern "C" __declspec(naked) void FUN_58841fbe_58841FBE() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 74 06: je 0x58841fce
        __asm _emit 0x74
        __asm _emit 0x06
        cmp dword ptr [ebp + 0ch], 0
        ; Exact mapped bytes 7F 02: jg 0x58841fd0
        __asm _emit 0x7f
        __asm _emit 0x02
        ; Exact mapped bytes EB 2D: jmp 0x58841ffd
        __asm _emit 0xeb
        __asm _emit 0x2d
        and dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 07: jmp 0x58841fdd
        __asm _emit 0xeb
        __asm _emit 0x07
        mov eax, dword ptr [ebp - 4]
        inc eax
        mov dword ptr [ebp - 4], eax
        mov eax, dword ptr [ebp - 4]
        cmp eax, dword ptr [ebp + 0ch]
        ; Exact mapped bytes 7D 18: jge 0x58841ffd
        __asm _emit 0x7d
        __asm _emit 0x18
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        ; Exact mapped bytes 0F BE 00: movsx eax, byte ptr [eax]
        __asm _emit 0x0f
        __asm _emit 0xbe
        __asm _emit 0x00
        test eax, eax
        ; Exact mapped bytes 75 09: jne 0x58841ffb
        __asm _emit 0x75
        __asm _emit 0x09
        mov eax, dword ptr [ebp + 8]
        add eax, dword ptr [ebp - 4]
        mov byte ptr [eax], 20h
        ; Exact mapped bytes EB D9: jmp 0x58841fd6
        __asm _emit 0xeb
        __asm _emit 0xd9
        mov esp, ebp
        pop ebp
        ret
    }
}
