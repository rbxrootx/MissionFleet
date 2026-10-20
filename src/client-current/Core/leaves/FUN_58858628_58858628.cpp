// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x58858628 .. +0x3F bytes.
extern "C" __declspec(naked) void FUN_58858628_58858628() {
    __asm {
        mov edi, edi
        push ebp
        mov ebp, esp
        sub esp, 10h
        push 0
        lea ecx, [ebp - 10h]
        ; Exact mapped bytes E8 9D F6 FF FF: call 0x58857cd7
        __asm _emit 0xe8
        __asm _emit 0x9d
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 0ch]
        mov edx, 0fde9h
        cmp dword ptr [eax + 8], edx
        ; Exact mapped bytes 74 0C: je 0x58858653
        __asm _emit 0x74
        __asm _emit 0x0c
        ; Exact mapped bytes E8 5F 70 01 00: call 0x5886f6ab
        __asm _emit 0xe8
        __asm _emit 0x5f
        __asm _emit 0x70
        __asm _emit 0x01
        __asm _emit 0x00
        xor edx, edx
        test eax, eax
        ; Exact mapped bytes 75 01: jne 0x58858653
        __asm _emit 0x75
        __asm _emit 0x01
        inc edx
        cmp byte ptr [ebp - 4], 0
        ; Exact mapped bytes 74 0A: je 0x58858663
        __asm _emit 0x74
        __asm _emit 0x0a
        mov ecx, dword ptr [ebp - 10h]
        and dword ptr [ecx + 350h], 0fffffffdh
        mov eax, edx
        leave
        ret
    }
}
