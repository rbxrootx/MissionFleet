// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x586EB810 .. +0x39 bytes.
extern "C" __declspec(naked) void FUN_586eb810() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D FC: mov dword ptr [ebp - 4], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes 6A 00: push 0
        __asm _emit 0x6a
        __asm _emit 0x00
        ; Exact mapped bytes 68 94 30 8B 58: push 0x588b3094
        __asm _emit 0x68
        __asm _emit 0x94
        __asm _emit 0x30
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 BA EE FF FF: call 0x586ea6e0
        __asm _emit 0xe8
        __asm _emit 0xba
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 01: push 1
        __asm _emit 0x6a
        __asm _emit 0x01
        ; Exact mapped bytes 68 A8 30 8B 58: push 0x588b30a8
        __asm _emit 0x68
        __asm _emit 0xa8
        __asm _emit 0x30
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 AB EE FF FF: call 0x586ea6e0
        __asm _emit 0xe8
        __asm _emit 0xab
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 6A 02: push 2
        __asm _emit 0x6a
        __asm _emit 0x02
        ; Exact mapped bytes 68 B4 30 8B 58: push 0x588b30b4
        __asm _emit 0x68
        __asm _emit 0xb4
        __asm _emit 0x30
        __asm _emit 0x8b
        __asm _emit 0x58
        ; Exact mapped bytes 8B 4D FC: mov ecx, dword ptr [ebp - 4]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xfc
        ; Exact mapped bytes E8 9C EE FF FF: call 0x586ea6e0
        __asm _emit 0xe8
        __asm _emit 0x9c
        __asm _emit 0xee
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 90: nop
        __asm _emit 0x90
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
