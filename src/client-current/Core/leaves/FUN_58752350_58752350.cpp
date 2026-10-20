// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58752350 .. +0x4A bytes.
extern "C" __declspec(naked) void FUN_58752350_58752350() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 0ch
        mov dword ptr [ebp - 0ch], ecx
        mov dword ptr [ebp - 8], 0
        mov dword ptr [ebp - 4], 0
        ; Exact mapped bytes EB 09: jmp 0x58752372
        __asm _emit 0xeb
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 4]
        add eax, 1
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 20h
        ; Exact mapped bytes 7D 1B: jge 0x58752393
        __asm _emit 0x7d
        __asm _emit 0x1b
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ebp - 0ch]
        cmp dword ptr [edx + ecx*4 + 0b50h], 0
        ; Exact mapped bytes 74 09: je 0x58752391
        __asm _emit 0x74
        __asm _emit 0x09
        mov eax, dword ptr [ebp - 8]
        add eax, 1
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB D6: jmp 0x58752369
        __asm _emit 0xeb
        __asm _emit 0xd6
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
