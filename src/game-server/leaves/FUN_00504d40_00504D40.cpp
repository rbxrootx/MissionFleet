// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00504D40 .. +0x69 bytes.
extern "C" __declspec(naked) void FUN_00504d40_00504D40() {
    __asm {
        push ebp
        mov ebp, esp
        push -1
        push 57d3a2h
        ; Exact mapped bytes 64 A1 00 00 00 00: mov eax, dword ptr fs:[0]
        __asm _emit 0x64
        __asm _emit 0xa1
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes 64 89 25 00 00 00 00: mov dword ptr fs:[0], esp
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x25
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        push ecx
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 4], 0
        mov eax, dword ptr [ebp - 10h]
        cmp dword ptr [eax + 20h], 0
        ; Exact mapped bytes 74 15: je 0x504d81
        __asm _emit 0x74
        __asm _emit 0x15
        mov ecx, dword ptr [ebp - 10h]
        mov edx, dword ptr [ecx + 14h]
        and edx, 2
        test edx, edx
        ; Exact mapped bytes 75 08: jne 0x504d81
        __asm _emit 0x75
        __asm _emit 0x08
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 D6 01 00 00: call 0x504f57
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0x01
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 20 00 00 00: call 0x504da9
        __asm _emit 0xe8
        __asm _emit 0x20
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov dword ptr [ebp - 4], 0ffffffffh
        mov ecx, dword ptr [ebp - 10h]
        add ecx, 10h
        ; Exact mapped bytes E8 B1 8A FE FF: call 0x4ed84c
        __asm _emit 0xe8
        __asm _emit 0xb1
        __asm _emit 0x8a
        __asm _emit 0xfe
        __asm _emit 0xff
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes 64 89 0D 00 00 00 00: mov dword ptr fs:[0], ecx
        __asm _emit 0x64
        __asm _emit 0x89
        __asm _emit 0x0d
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        __asm _emit 0x00
        mov esp, ebp
        pop ebp
        ret
    }
}
