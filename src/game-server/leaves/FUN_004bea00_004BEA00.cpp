// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004BEA00 .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_004bea00_004BEA00() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        push ebx
        push esi
        push edi
        ; Exact mapped bytes E8 82 D7 FF FF: call 0x4bc190
        __asm _emit 0xe8
        __asm _emit 0x82
        __asm _emit 0xd7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [eax]
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes DB E3: fninit
        __asm _emit 0xdb
        __asm _emit 0xe3
        ; Exact mapped bytes E8 56 46 FF FF: call 0x4b3070
        __asm _emit 0xe8
        __asm _emit 0x56
        __asm _emit 0x46
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 31: je 0x4bea51
        __asm _emit 0x74
        __asm _emit 0x31
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        mov eax, dword ptr [edx]
        and eax, 10008h
        test eax, eax
        ; Exact mapped bytes 74 20: je 0x4bea51
        __asm _emit 0x74
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 4]
        add edx, 1ch
        mov dword ptr [ebp - 8], edx
        mov eax, dword ptr [ebp - 8]
        mov dword ptr [eax + 4], 0
        mov ecx, dword ptr [ebp - 8]
        mov dword ptr [ecx + 8], 0ffffh
        pop edi
        pop esi
        pop ebx
        mov esp, ebp
        pop ebp
        ret
    }
}
