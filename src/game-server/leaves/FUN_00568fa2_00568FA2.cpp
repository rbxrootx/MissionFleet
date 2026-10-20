// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00568FA2 .. +0x61 bytes.
extern "C" __declspec(naked) void FUN_00568fa2_00568FA2() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        push 3ah
        push 5cffc8h
        mov eax, dword ptr [ebp - 4]
        push eax
        ; Exact mapped bytes E8 A7 21 F9 FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xa7
        __asm _emit 0x21
        __asm _emit 0xf9
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 0D: jne 0x568fcc
        __asm _emit 0x75
        __asm _emit 0x0d
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        and edx, dword ptr [ecx + 34h]
        test edx, edx
        ; Exact mapped bytes 74 11: je 0x568fdd
        __asm _emit 0x74
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [eax + 30h], 0
        mov eax, 40101h
        ; Exact mapped bytes EB 20: jmp 0x568ffd
        __asm _emit 0xeb
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp + 0ch]
        and edx, dword ptr [ecx + 38h]
        test edx, edx
        ; Exact mapped bytes 75 11: jne 0x568ffb
        __asm _emit 0x75
        __asm _emit 0x11
        mov eax, dword ptr [ebp - 4]
        mov eax, dword ptr [eax + 30h]
        neg eax
        sbb eax, eax
        add eax, 40101h
        ; Exact mapped bytes EB 02: jmp 0x568ffd
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
