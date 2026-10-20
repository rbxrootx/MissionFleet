// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58563C50 .. +0x29 bytes.
extern "C" __declspec(naked) void FUN_58563c50_58563C50() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 168h], 0
        ; Exact mapped bytes 74 10: je 0x58563c73
        __asm _emit 0x74
        __asm _emit 0x10
        mov ecx, dword ptr [ebp - 4]
        mov ecx, dword ptr [ecx + 168h]
        ; Exact mapped bytes E8 CF 8F FB FF: call 0x5851cc40
        __asm _emit 0xe8
        __asm _emit 0xcf
        __asm _emit 0x8f
        __asm _emit 0xfb
        __asm _emit 0xff
        ; Exact mapped bytes EB 02: jmp 0x58563c75
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
