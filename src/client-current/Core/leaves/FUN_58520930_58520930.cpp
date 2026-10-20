// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58520930 .. +0x6C bytes.
extern "C" __declspec(naked) void FUN_58520930_58520930() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp - 4]
        cmp dword ptr [eax + 4ch], 0
        ; Exact mapped bytes 74 40: je 0x58520982
        __asm _emit 0x74
        __asm _emit 0x40
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 16 FF FF FF: call 0x58520860
        __asm _emit 0xe8
        __asm _emit 0x16
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 4]
        mov dword ptr [ebp - 8], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 B8 F6 FF FF: call 0x58520010
        __asm _emit 0xe8
        __asm _emit 0xb8
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        movzx edx, al
        test edx, edx
        ; Exact mapped bytes 75 07: jne 0x58520966
        __asm _emit 0x75
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 4ch]
        push ecx
        ; Exact mapped bytes E8 0F 0B 33 00: call 0x58851481
        __asm _emit 0xe8
        __asm _emit 0x0f
        __asm _emit 0x0b
        __asm _emit 0x33
        __asm _emit 0x00
        add esp, 4
        test eax, eax
        ; Exact mapped bytes 74 07: je 0x58520980
        __asm _emit 0x74
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        ; Exact mapped bytes EB 07: jmp 0x58520989
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 0
        push 2
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 7B F9 FF FF: call 0x58520310
        __asm _emit 0xe8
        __asm _emit 0x7b
        __asm _emit 0xf9
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 8]
        mov esp, ebp
        pop ebp
        ret
    }
}
