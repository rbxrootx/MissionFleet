// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00469F80 .. +0x47 bytes.
extern "C" __declspec(naked) void __strdup_00469F80() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        cmp dword ptr [ebp + 8], 0
        ; Exact mapped bytes 75 04: jne 0x469f8e
        __asm _emit 0x75
        __asm _emit 0x04
        xor eax, eax
        ; Exact mapped bytes EB 35: jmp 0x469fc3
        __asm _emit 0xeb
        __asm _emit 0x35
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 A9 B7 FF FF: call 0x465740
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0xb7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        add eax, 1
        push eax
        ; Exact mapped bytes E8 ED C7 FF FF: call 0x466790
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0xc7
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 4
        mov dword ptr [ebp - 4], eax
        cmp dword ptr [ebp - 4], 0
        ; Exact mapped bytes 74 12: je 0x469fc1
        __asm _emit 0x74
        __asm _emit 0x12
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov edx, dword ptr [ebp - 4]
        push edx
        ; Exact mapped bytes E8 B4 B9 FF FF: call 0x465970
        __asm _emit 0xe8
        __asm _emit 0xb4
        __asm _emit 0xb9
        __asm _emit 0xff
        __asm _emit 0xff
        add esp, 8
        ; Exact mapped bytes EB 02: jmp 0x469fc3
        __asm _emit 0xeb
        __asm _emit 0x02
        xor eax, eax
        mov esp, ebp
        pop ebp
        ret
    }
}
