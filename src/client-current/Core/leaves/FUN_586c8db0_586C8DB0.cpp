// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586C8DB0 .. +0x59 bytes.
extern "C" __declspec(naked) void FUN_586c8db0_586C8DB0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 10h
        mov dword ptr [ebp - 4], ecx
        mov eax, dword ptr [ebp + 8]
        push eax
        ; Exact mapped bytes E8 EE E4 DB FF: call 0x584872b0
        __asm _emit 0xe8
        __asm _emit 0xee
        __asm _emit 0xe4
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 4
        cmp dword ptr [ebp - 4], eax
        ; Exact mapped bytes 74 39: je 0x586c8e03
        __asm _emit 0x74
        __asm _emit 0x39
        mov ecx, dword ptr [ebp + 8]
        ; Exact mapped bytes E8 3E F1 DB FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x3e
        __asm _emit 0xf1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 33 F1 DB FF: call 0x58487f10
        __asm _emit 0xe8
        __asm _emit 0x33
        __asm _emit 0xf1
        __asm _emit 0xdb
        __asm _emit 0xff
        mov dword ptr [ebp - 0ch], eax
        mov ecx, dword ptr [ebp - 8]
        push ecx
        mov edx, dword ptr [ebp - 0ch]
        push edx
        ; Exact mapped bytes E8 23 E1 DB FF: call 0x58486f10
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xe1
        __asm _emit 0xdb
        __asm _emit 0xff
        add esp, 8
        mov eax, dword ptr [ebp - 4]
        mov dword ptr [ebp - 10h], eax
        mov ecx, dword ptr [ebp + 8]
        push ecx
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AE FC FF FF: call 0x586c8ab0
        __asm _emit 0xe8
        __asm _emit 0xae
        __asm _emit 0xfc
        __asm _emit 0xff
        __asm _emit 0xff
        nop
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 04 00: ret 4
        __asm _emit 0xc2
        __asm _emit 0x04
        __asm _emit 0x00
    }
}
