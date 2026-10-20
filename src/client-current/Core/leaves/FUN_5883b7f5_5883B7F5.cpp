// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883B7F5 .. +0x4D bytes.
extern "C" __declspec(naked) void FUN_5883b7f5_5883B7F5() {
    __asm {
        push ebp
        mov ebp, esp
        push esi
        push edi
        mov edi, dword ptr [ebp + 8]
        mov esi, ecx
        cmp edi, -1
        ; Exact mapped bytes 74 34: je 0x5883b838
        __asm _emit 0x74
        __asm _emit 0x34
        push 0
        push edi
        ; Exact mapped bytes E8 5C FA FF FF: call 0x5883b268
        __asm _emit 0xe8
        __asm _emit 0x5c
        __asm _emit 0xfa
        __asm _emit 0xff
        __asm _emit 0xff
        test al, al
        ; Exact mapped bytes 74 20: je 0x5883b830
        __asm _emit 0x74
        __asm _emit 0x20
        push dword ptr [ebp + 0ch]
        mov ecx, esi
        push edi
        push 0
        ; Exact mapped bytes E8 7C F8 FF FF: call 0x5883b099
        __asm _emit 0xe8
        __asm _emit 0x7c
        __asm _emit 0xf8
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [esi + 14h], 10h
        mov dword ptr [esi + 10h], edi
        ; Exact mapped bytes 72 04: jb 0x5883b82a
        __asm _emit 0x72
        __asm _emit 0x04
        mov eax, dword ptr [esi]
        ; Exact mapped bytes EB 02: jmp 0x5883b82c
        __asm _emit 0xeb
        __asm _emit 0x02
        mov eax, esi
        mov byte ptr [eax + edi], 0
        pop edi
        mov eax, esi
        pop esi
        pop ebp
        ; Exact mapped bytes C2 08 00: ret 8
        __asm _emit 0xc2
        __asm _emit 0x08
        __asm _emit 0x00
        push 588c1cfch
        ; Exact mapped bytes E8 4B 2F FF FF: call 0x5882e78d
        __asm _emit 0xe8
        __asm _emit 0x4b
        __asm _emit 0x2f
        __asm _emit 0xff
        __asm _emit 0xff
    }
}
