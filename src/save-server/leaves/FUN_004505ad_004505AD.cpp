// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x004505AD .. +0x4C bytes.
extern "C" __declspec(naked) void FUN_004505ad_004505AD() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 8
        mov dword ptr [ebp - 8], ecx
        mov eax, dword ptr [ebp - 8]
        mov ecx, dword ptr [eax + 70h]
        and ecx, 4000h
        test ecx, ecx
        ; Exact mapped bytes 74 15: je 0x4505db
        __asm _emit 0x74
        __asm _emit 0x15
        mov edx, dword ptr [ebp - 8]
        mov eax, dword ptr [edx + 20h]
        push eax
        ; Exact mapped bytes FF 15 94 BE 68 00: call dword ptr [0x68be94]
        __asm _emit 0xff
        __asm _emit 0x15
        __asm _emit 0x94
        __asm _emit 0xbe
        __asm _emit 0x68
        __asm _emit 0x00
        push eax
        ; Exact mapped bytes E8 D6 F2 07 00: call 0x4cf8af
        __asm _emit 0xe8
        __asm _emit 0xd6
        __asm _emit 0xf2
        __asm _emit 0x07
        __asm _emit 0x00
        ; Exact mapped bytes EB 1A: jmp 0x4505f5
        __asm _emit 0xeb
        __asm _emit 0x1a
        ; Exact mapped bytes E8 B3 BF 0D 00: call 0x52c593
        __asm _emit 0xe8
        __asm _emit 0xb3
        __asm _emit 0xbf
        __asm _emit 0x0d
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        push 0
        push -4
        mov ecx, dword ptr [ebp - 8]
        mov edx, dword ptr [ecx]
        mov ecx, dword ptr [ebp - 8]
        ; Exact mapped bytes FF 52 5C: call dword ptr [edx + 0x5c]
        __asm _emit 0xff
        __asm _emit 0x52
        __asm _emit 0x5c
        mov eax, dword ptr [ebp - 4]
        mov esp, ebp
        pop ebp
        ret
    }
}
