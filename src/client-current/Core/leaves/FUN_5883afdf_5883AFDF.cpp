// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883AFDF .. +0x58 bytes.
extern "C" __declspec(naked) void FUN_5883afdf_5883AFDF() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        push edi
        mov edi, ecx
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 73 15: jae 0x5883b004
        __asm _emit 0x73
        __asm _emit 0x15
        mov eax, dword ptr [esi + 10h]
        add eax, 1
        ; Exact mapped bytes 74 18: je 0x5883b00f
        __asm _emit 0x74
        __asm _emit 0x18
        push eax
        push esi
        push edi
        ; Exact mapped bytes E8 91 18 01 00: call 0x5884c890
        __asm _emit 0xe8
        __asm _emit 0x91
        __asm _emit 0x18
        __asm _emit 0x01
        __asm _emit 0x00
        add esp, 0ch
        ; Exact mapped bytes EB 0B: jmp 0x5883b00f
        __asm _emit 0xeb
        __asm _emit 0x0b
        test edi, edi
        ; Exact mapped bytes 74 04: je 0x5883b00c
        __asm _emit 0x74
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        mov dword ptr [edi], eax
        and dword ptr [esi], 0
        mov eax, dword ptr [esi + 10h]
        mov dword ptr [edi + 10h], eax
        mov eax, dword ptr [esi + 14h]
        mov dword ptr [edi + 14h], eax
        mov dword ptr [esi + 14h], 0fh
        and dword ptr [esi + 10h], 0
        cmp dword ptr [esi + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883b02e
        __asm _emit 0x72
        __asm _emit 0x02
        mov esi, dword ptr [esi]
        pop edi
        mov byte ptr [esi], 0
        pop esi
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
