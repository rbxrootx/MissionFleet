// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00572E8C .. +0x4B bytes.
extern "C" __declspec(naked) void FUN_00572e8c_00572E8C() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 17 F9 FD FF: call 0x5527b5
        __asm _emit 0xe8
        __asm _emit 0x17
        __asm _emit 0xf9
        __asm _emit 0xfd
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 1ch], 0
        ; Exact mapped bytes 75 14: jne 0x572ebb
        __asm _emit 0x75
        __asm _emit 0x14
        push 59bh
        push 5d0930h
        ; Exact mapped bytes E8 4A 1B FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x4a
        __asm _emit 0x1b
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x572ebb
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor ecx, ecx
        test ecx, ecx
        ; Exact mapped bytes 75 DD: jne 0x572e9e
        __asm _emit 0x75
        __asm _emit 0xdd
        mov ecx, dword ptr [ebp - 4]
        add ecx, 3ch
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 3ch]
        ; Exact mapped bytes FF 50 0C: call dword ptr [eax + 0xc]
        __asm _emit 0xff
        __asm _emit 0x50
        __asm _emit 0x0c
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
