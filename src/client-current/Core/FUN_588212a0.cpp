// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x588212A0 .. +0x2E bytes.
extern "C" __declspec(naked) void FUN_588212a0() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 D1 FF FF FF: call 0x58821280
        __asm _emit 0xe8
        __asm _emit 0xd1
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp + 8]
        and eax, 1
        ; Exact mapped bytes 74 0E: je 0x588212c5
        __asm _emit 0x74
        __asm _emit 0x0e
        push 38h
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 72 FD 00 00: call 0x58831034
        __asm _emit 0xe8
        __asm _emit 0x72
        __asm _emit 0xfd
        __asm _emit 0x00
        __asm _emit 0x00
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret 4
    }
}
