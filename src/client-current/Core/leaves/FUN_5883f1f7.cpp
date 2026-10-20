// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x5883F1F7 .. +0x1F bytes.
extern "C" __declspec(naked) void FUN_5883f1f7() {
    __asm {
        ; Exact mapped bytes 55: push ebp
        __asm _emit 0x55
        ; Exact mapped bytes 8B EC: mov ebp, esp
        __asm _emit 0x8b
        __asm _emit 0xec
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 51: push ecx
        __asm _emit 0x51
        ; Exact mapped bytes 89 4D F8: mov dword ptr [ebp - 8], ecx
        __asm _emit 0x89
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes 8D 45 FF: lea eax, [ebp - 1]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xff
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8D 45 FE: lea eax, [ebp - 2]
        __asm _emit 0x8d
        __asm _emit 0x45
        __asm _emit 0xfe
        ; Exact mapped bytes 50: push eax
        __asm _emit 0x50
        ; Exact mapped bytes 8B 4D F8: mov ecx, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x4d
        __asm _emit 0xf8
        ; Exact mapped bytes E8 02 FF FF FF: call 0x5883f111
        __asm _emit 0xe8
        __asm _emit 0x02
        __asm _emit 0xff
        __asm _emit 0xff
        __asm _emit 0xff
        ; Exact mapped bytes 8B 45 F8: mov eax, dword ptr [ebp - 8]
        __asm _emit 0x8b
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes 8B E5: mov esp, ebp
        __asm _emit 0x8b
        __asm _emit 0xe5
        ; Exact mapped bytes 5D: pop ebp
        __asm _emit 0x5d
        ; Exact mapped bytes C3: ret
        __asm _emit 0xc3
    }
}
