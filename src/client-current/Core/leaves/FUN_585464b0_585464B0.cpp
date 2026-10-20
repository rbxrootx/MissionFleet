// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x585464B0 .. +0x46 bytes.
extern "C" __declspec(naked) void FUN_585464b0_585464B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 300h], 0
        ; Exact mapped bytes 75 02: jne 0x585464c7
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 2B: jmp 0x585464f2
        __asm _emit 0xeb
        __asm _emit 0x2b
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x585464d9
        __asm _emit 0xeb
        __asm _emit 0x09
        mov ecx, dword ptr [ebp - 4]
        add ecx, 1
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp - 4], 3e8h
        ; Exact mapped bytes 7D 10: jge 0x585464f2
        __asm _emit 0x7d
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 D6 FE FF FF: call 0x585463c0
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 75 02: jne 0x585464f0
        __asm _emit 0x75
        __asm _emit 0x02
        ; Exact mapped bytes EB 02: jmp 0x585464f2
        __asm _emit 0xeb
        __asm _emit 0x02
        ; Exact mapped bytes EB DE: jmp 0x585464d0
        __asm _emit 0xeb
        __asm _emit 0xde
        mov esp, ebp
        pop ebp
        ret
    }
}
