// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x0054B917 .. +0x41 bytes.
extern "C" __declspec(naked) void FUN_0054b917_0054B917() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push ebx
        push esi
        push edi
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7A FE FF FF: call 0x54b7a3
        __asm _emit 0xe8
        __asm _emit 0x7a
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 14: je 0x54b941
        __asm _emit 0x74
        __asm _emit 0x14
        push 0e6h
        push 678970h
        ; Exact mapped bytes E8 04 D4 FD FF: call 0x528d40
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0xd4
        __asm _emit 0xfd
        __asm _emit 0xff
        test eax, eax
        ; Exact mapped bytes 74 01: je 0x54b941
        __asm _emit 0x74
        __asm _emit 0x01
        ; Exact mapped bytes CC: int3
        __asm _emit 0xcc
        xor eax, eax
        test eax, eax
        ; Exact mapped bytes 75 DA: jne 0x54b921
        __asm _emit 0x75
        __asm _emit 0xda
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes DD 01: fld qword ptr [ecx]
        __asm _emit 0xdd
        __asm _emit 0x01
        ; Exact mapped bytes E8 4F 22 F2 FF: call 0x46dba0
        __asm _emit 0xe8
        __asm _emit 0x4f
        __asm _emit 0x22
        __asm _emit 0xf2
        __asm _emit 0xff
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
