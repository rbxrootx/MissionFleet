// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5864AF00 .. +0x3A bytes.
extern "C" __declspec(naked) void FUN_5864af00_5864AF00() {
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        mov dword ptr [ebp - 4], ecx
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 51 FE FF FF: call 0x5864ad60
        __asm _emit 0xe8
        __asm _emit 0x51
        __asm _emit 0xfe
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 20: jbe 0x5864af34
        __asm _emit 0x76
        __asm _emit 0x20
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 84 FF FF FF: call 0x5864aea0
        __asm _emit 0xe8
        __asm _emit 0x84
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        cmp dword ptr [ebp + 8], eax
        ; Exact mapped bytes 76 06: jbe 0x5864af27
        __asm _emit 0x76
        __asm _emit 0x06
        ; Exact mapped bytes E8 1A D1 E3 FF: call 0x58488040
        __asm _emit 0xe8
        __asm _emit 0x1a
        __asm _emit 0xd1
        __asm _emit 0xe3
        __asm _emit 0xff
        nop
        lea eax, [ebp + 8]
        push eax
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 ED 73 FF FF: call 0x58642320
        __asm _emit 0xe8
        __asm _emit 0xed
        __asm _emit 0x73
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
