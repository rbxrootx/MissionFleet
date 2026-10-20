// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0042D385 .. +0x24 bytes.
extern "C" __declspec(naked) void FUN_0042d385_0042D385() {
    __asm {
        mov eax, dword ptr [ecx + 4]
        push esi
        mov edx, dword ptr [eax]
        mov esi, dword ptr [eax + 8]
        test edx, edx
        mov dword ptr [ecx + 4], edx
        ; Exact mapped bytes 74 06: je 0x42d39b
        __asm _emit 0x74
        __asm _emit 0x06
        and dword ptr [edx + 4], 0
        ; Exact mapped bytes EB 04: jmp 0x42d39f
        __asm _emit 0xeb
        __asm _emit 0x04
        and dword ptr [ecx + 8], 0
        push eax
        ; Exact mapped bytes E8 74 FF FF FF: call 0x42d319
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, esi
        pop esi
        ret
    }
}
