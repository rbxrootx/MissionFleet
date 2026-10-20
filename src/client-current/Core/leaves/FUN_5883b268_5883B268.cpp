// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B268 .. +0x5F bytes.
extern "C" __declspec(naked) void FUN_5883b268_5883B268() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        mov esi, dword ptr [ebp + 8]
        cmp esi, -2
        ; Exact mapped bytes 77 49: ja 0x5883b2bd
        __asm _emit 0x77
        __asm _emit 0x49
        cmp dword ptr [ecx + 14h], esi
        ; Exact mapped bytes 73 0B: jae 0x5883b284
        __asm _emit 0x73
        __asm _emit 0x0b
        push dword ptr [ecx + 10h]
        push esi
        ; Exact mapped bytes E8 8B FE FF FF: call 0x5883b10d
        __asm _emit 0xe8
        __asm _emit 0x8b
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes EB 2F: jmp 0x5883b2b3
        __asm _emit 0xeb
        __asm _emit 0x2f
        cmp byte ptr [ebp + 0ch], 0
        ; Exact mapped bytes 74 17: je 0x5883b2a1
        __asm _emit 0x74
        __asm _emit 0x17
        cmp esi, 10h
        ; Exact mapped bytes 73 12: jae 0x5883b2a1
        __asm _emit 0x73
        __asm _emit 0x12
        mov eax, dword ptr [ecx + 10h]
        cmp esi, eax
        cmovb eax, esi
        push eax
        push 1
        ; Exact mapped bytes E8 EE 00 00 00: call 0x5883b38d
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        ; Exact mapped bytes EB 12: jmp 0x5883b2b3
        __asm _emit 0xeb
        __asm _emit 0x12
        test esi, esi
        ; Exact mapped bytes 75 10: jne 0x5883b2b5
        __asm _emit 0x75
        __asm _emit 0x10
        and dword ptr [ecx + 10h], esi
        cmp dword ptr [ecx + 14h], 10h
        ; Exact mapped bytes 72 02: jb 0x5883b2b0
        __asm _emit 0x72
        __asm _emit 0x02
        mov ecx, dword ptr [ecx]
        mov byte ptr [ecx], 0
        test esi, esi
        setne al
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 588c1cfch
        ; Exact mapped bytes E8 C6 34 FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0xc6
        __asm _emit 0x34
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
