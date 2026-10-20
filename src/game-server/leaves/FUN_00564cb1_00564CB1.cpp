// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00564CB1 .. +0x38 bytes.
extern "C" __declspec(naked) void FUN_00564cb1_00564CB1() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 14: jne 0x564cd5
        __asm _emit 0x75
        __asm _emit 0x14
        push 0cch
        push 5d0bb4h
        ; Exact mapped bytes E8 30 FD FC FF: call 0x534a00
        __asm _emit 0xe8
        __asm _emit 0x30
        __asm _emit 0xfd
        __asm _emit 0xfc
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x564cd5
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 E0: jne 0x564cbb
        __asm _emit 0x75
        __asm _emit 0xe0
        mov eax, 1
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
    }
}
