// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x584854B0 .. +0x14C bytes.
extern "C" __declspec(naked) void FUN_584854b0_584854B0() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 28h
        mov dword ptr [ebp - 4], ecx
        push 5
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 8D E7 FF FF: call 0x58483c50
        __asm _emit 0xe8
        __asm _emit 0x8d
        __asm _emit 0xe7
        __asm _emit 0xff
        __asm _emit 0xff
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 0ch], ecx
        push 0
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 44 F6 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x44
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 8], eax
        mov edx, dword ptr [ebp - 8]
        push edx
        mov ecx, dword ptr [ebp - 0ch]
        ; Exact mapped bytes E8 45 0A 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x45
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 8ch]
        mov dword ptr [ebp - 10h], ecx
        push 0fffffeffh
        mov ecx, dword ptr [ebp - 10h]
        ; Exact mapped bytes E8 AC 00 33 00: call 0x587b55b0
        __asm _emit 0xe8
        __asm _emit 0xac
        __asm _emit 0x00
        __asm _emit 0x33
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 18h], eax
        push 1
        ; Exact mapped bytes 8B 0D CC 07 96 58: mov ecx, dword ptr [0x589607cc]
        __asm _emit 0x8b
        __asm _emit 0x0d
        __asm _emit 0xcc
        __asm _emit 0x07
        __asm _emit 0x96
        __asm _emit 0x58
        ; Exact mapped bytes E8 03 F6 FF FF: call 0x58484b20
        __asm _emit 0xe8
        __asm _emit 0x03
        __asm _emit 0xf6
        __asm _emit 0xff
        __asm _emit 0xff
        mov dword ptr [ebp - 14h], eax
        mov ecx, dword ptr [ebp - 14h]
        push ecx
        mov ecx, dword ptr [ebp - 18h]
        ; Exact mapped bytes E8 04 0A 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0x04
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 90h]
        mov dword ptr [ebp - 1ch], eax
        push 0
        mov ecx, dword ptr [ebp - 1ch]
        ; Exact mapped bytes E8 5E 08 00 00: call 0x58485da0
        __asm _emit 0xe8
        __asm _emit 0x5e
        __asm _emit 0x08
        __asm _emit 0x00
        __asm _emit 0x00
        mov ecx, dword ptr [ebp - 4]
        mov edx, dword ptr [ecx + 90h]
        mov dword ptr [ebp - 20h], edx
        push 0f0h
        mov ecx, dword ptr [ebp - 20h]
        ; Exact mapped bytes E8 E5 FF 32 00: call 0x587b5540
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0xff
        __asm _emit 0x32
        __asm _emit 0x00
        mov eax, dword ptr [ebp - 4]
        mov ecx, dword ptr [eax + 94h]
        mov dword ptr [ebp - 24h], ecx
        push 0
        mov ecx, dword ptr [ebp - 24h]
        ; Exact mapped bytes E8 BF 09 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xbf
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        mov edx, dword ptr [ebp - 4]
        mov eax, dword ptr [edx + 98h]
        mov dword ptr [ebp - 28h], eax
        push 0
        mov ecx, dword ptr [ebp - 28h]
        ; Exact mapped bytes E8 A9 09 00 00: call 0x58485f30
        __asm _emit 0xe8
        __asm _emit 0xa9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 58894890h
        ; Exact mapped bytes E8 5B CA 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x5b
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 0
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 1D 0A 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x1d
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 588948b8h
        ; Exact mapped bytes E8 3F CA 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x3f
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 1
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 01 0A 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0x01
        __asm _emit 0x0a
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 588948e0h
        ; Exact mapped bytes E8 23 CA 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x23
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 2
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 E5 09 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xe5
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        push 46h
        push 1
        push 58894908h
        ; Exact mapped bytes E8 07 CA 09 00: call 0x58521ff0
        __asm _emit 0xe8
        __asm _emit 0x07
        __asm _emit 0xca
        __asm _emit 0x09
        __asm _emit 0x00
        add esp, 4
        push eax
        push 3
        mov ecx, dword ptr [ebp - 4]
        ; Exact mapped bytes E8 C9 09 00 00: call 0x58485fc0
        __asm _emit 0xe8
        __asm _emit 0xc9
        __asm _emit 0x09
        __asm _emit 0x00
        __asm _emit 0x00
        nop
        mov esp, ebp
        pop ebp
        ret
    }
}
