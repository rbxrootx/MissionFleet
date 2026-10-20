// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x005028BB .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_005028bb_005028BB() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        cmp dword ptr [eax + 7ch], 0
        ; Exact mapped bytes 74 36: je 0x502903
        __asm _emit 0x74
        __asm _emit 0x36
        mov ecx, dword ptr [ebp - 8]
        cmp dword ptr [ecx + 80h], 0
        ; Exact mapped bytes 74 2A: je 0x502903
        __asm _emit 0x74
        __asm _emit 0x2a
        push 0
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 78h]
        push eax
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx + 7ch]
        push edx
        ; Exact mapped bytes E8 A2 DD FF FF: call 0x500690
        __asm _emit 0xe8
        __asm _emit 0xa2
        __asm _emit 0xdd
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0C: je 0x502903
        __asm _emit 0x74
        __asm _emit 0x0c
        mov eax, dword ptr [ebp - 4]
        push eax
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes E8 76 F7 03 00: call 0x542079
        __asm _emit 0xe8
        __asm _emit 0x76
        __asm _emit 0xf7
        __asm _emit 0x03
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
