// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0050DA76 .. +0x32 bytes.
extern "C" __declspec(naked) void FUN_0050da76_0050DA76() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        ; Exact mapped bytes E8 D6 74 03 00: call 0x544f55
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x74
        __asm _emit 0x03
        __asm _emit 0x00
        mov eax, dword ptr [eax + 0c0h]
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 13: je 0x50daa1
        __asm _emit 0x74
        __asm _emit 0x13
        push 0cfh
        push 5c4e5ch
        mov ecx, dword ptr [ebp - 4]
        push ecx
        ; Exact mapped bytes E8 BF D6 FE FF: call 0x4fb160
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0xd6
        __asm _emit 0xfe
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
