// Reconstructed from Ghidra evidence and the locally captured mapped client image.
// Indexed function extent: 0x00464E9A .. +0x102 bytes.
extern "C" __declspec(naked) void FUN_00464e9a_00464E9A() {
    __asm {
        push ebp
        mov ebp, esp
        sub esp, 18h
        mov eax, 0cccccccch
        mov dword ptr [ebp - 18h], eax
        mov dword ptr [ebp - 14h], eax
        mov dword ptr [ebp - 10h], eax
        mov dword ptr [ebp - 0ch], eax
        mov dword ptr [ebp - 8], eax
        mov dword ptr [ebp - 4], eax
        mov dword ptr [ebp - 10h], ecx
        mov dword ptr [ebp - 8], 0
        mov eax, dword ptr [ebp + 8]
        mov ecx, dword ptr [eax + 10h]
        shr ecx, 4
        and ecx, 0ffh
        mov edx, dword ptr [ebp + 14h]
        sub edx, ecx
        mov dword ptr [ebp - 0ch], edx
        cmp dword ptr [ebp - 0ch], -0ah
        ; Exact mapped bytes 7F 23: jg 0x464f01
        __asm _emit 0x7f
        __asm _emit 0x23
        mov eax, dword ptr [ebp - 0ch]
        imul eax, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 14h], eax
        ; Exact mapped bytes DB 45 EC: fild dword ptr [ebp - 0x14]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xec
        ; Exact mapped bytes D8 0D 38 1C 58 00: fmul dword ptr [0x581c38]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x38
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 05 34 1C 58 00: fadd dword ptr [0x581c34]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x34
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 00 46 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x00
        __asm _emit 0x46
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 30: jmp 0x464f31
        __asm _emit 0xeb
        __asm _emit 0x30
        cmp dword ptr [ebp - 0ch], 5
        ; Exact mapped bytes 7C 23: jl 0x464f2a
        __asm _emit 0x7c
        __asm _emit 0x23
        mov ecx, dword ptr [ebp - 0ch]
        imul ecx, dword ptr [ebp - 0ch]
        mov dword ptr [ebp - 18h], ecx
        ; Exact mapped bytes DB 45 E8: fild dword ptr [ebp - 0x18]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xe8
        ; Exact mapped bytes D8 0D 30 1C 58 00: fmul dword ptr [0x581c30]
        __asm _emit 0xd8
        __asm _emit 0x0d
        __asm _emit 0x30
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes D8 05 2C 1C 58 00: fadd dword ptr [0x581c2c]
        __asm _emit 0xd8
        __asm _emit 0x05
        __asm _emit 0x2c
        __asm _emit 0x1c
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 D7 45 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0xd7
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 8], eax
        ; Exact mapped bytes EB 07: jmp 0x464f31
        __asm _emit 0xeb
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 64h
        cmp dword ptr [ebp - 8], 1
        ; Exact mapped bytes 7D 07: jge 0x464f3e
        __asm _emit 0x7d
        __asm _emit 0x07
        mov dword ptr [ebp - 8], 1
        mov edx, dword ptr [ebp - 10h]
        mov eax, dword ptr [edx + 4]
        mov ecx, dword ptr [eax + 40ca8h]
        mov edx, dword ptr [ebp + 10h]
        imul edx, edx, 1f4h
        lea eax, [ecx + edx + 21ch]
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 10h]
        shr edx, 4
        and edx, 0ffh
        ; Exact mapped bytes D9 45 0C: fld dword ptr [ebp + 0xc]
        __asm _emit 0xd9
        __asm _emit 0x45
        __asm _emit 0x0c
        ; Exact mapped bytes D8 0C 90: fmul dword ptr [eax + edx*4]
        __asm _emit 0xd8
        __asm _emit 0x0c
        __asm _emit 0x90
        ; Exact mapped bytes E8 88 45 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x88
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        mov dword ptr [ebp - 4], eax
        ; Exact mapped bytes DB 45 F8: fild dword ptr [ebp - 8]
        __asm _emit 0xdb
        __asm _emit 0x45
        __asm _emit 0xf8
        ; Exact mapped bytes D8 4D 0C: fmul dword ptr [ebp + 0xc]
        __asm _emit 0xd8
        __asm _emit 0x4d
        __asm _emit 0x0c
        ; Exact mapped bytes D8 35 70 10 58 00: fdiv dword ptr [0x581070]
        __asm _emit 0xd8
        __asm _emit 0x35
        __asm _emit 0x70
        __asm _emit 0x10
        __asm _emit 0x58
        __asm _emit 0x00
        ; Exact mapped bytes E8 74 45 04 00: call 0x4a94fc
        __asm _emit 0xe8
        __asm _emit 0x74
        __asm _emit 0x45
        __asm _emit 0x04
        __asm _emit 0x00
        mov ecx, dword ptr [ebp + 8]
        mov edx, dword ptr [ecx + 58h]
        add edx, eax
        mov eax, dword ptr [ebp + 8]
        mov dword ptr [eax + 58h], edx
        mov esp, ebp
        pop ebp
        ; Exact mapped bytes C2 10 00: ret 0x10
        __asm _emit 0xc2
        __asm _emit 0x10
        __asm _emit 0x00
    }
}
